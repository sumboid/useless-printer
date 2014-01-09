#include <vector>
#include <map>
#include <cstdlib>
#include <exception>
#include <stdexcept>
#include "printer_func.h"
#include "builder.h"
#include "printer_builder.h"
#include "doom_font.h"
#include "banner_font.h"

using std::map;
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::getline;
using std::invalid_argument;

void print_help() {
  cout << "Usage: " << PACKAGE_NAME << " [OPTION]..." << endl;
  cout << "Read standart input and print input message with ascii-art" << endl << endl;
  cout << "    -c                   enable color output" << endl;
  cout << "    -f (doom | banner)   select font (default: banner)" << endl;
  cout << "    -d DELAY             set DELAY in nanoseconds" << endl;
  cout << "    -h                   print this help and exit" << endl << endl;
  cout << "Report bugs to: " << PACKAGE_BUGREPORT << endl; 
}

struct config_t {
  bool colors;
  font_t font;
  size_t delay;

  config_t() {
    colors = false;
    delay = 0;
    font = banner_font();
  }
};

config_t parse_flags(int argc, char** argv) {
  map<string, font_t> font_mapping;
  font_mapping["doom"] = doom_font();
  font_mapping["banner"] = banner_font();

  config_t config;
  char c;
  while ((c = getopt (argc, argv, "chf:d:")) != -1) {
    switch (c) {
      case 'c': config.colors = true; break;
      case 'h': print_help(); throw "ok";
      case 'f': 
        if(font_mapping.find(optarg) != font_mapping.end())
          config.font = font_mapping[optarg];
        break;
      case 'd': config.delay = atoi(optarg); break;
      case '?':
        cerr << "Use -h to get help." << endl;
        throw invalid_argument("error");
      default: break;
    }
  }

  return config;
}

int main(int argc, char *argv[])
{
  config_t config;
  try {
    config = parse_flags(argc, argv);
  }
  catch (const invalid_argument& e) {
    return 1;
  }
  catch (...) {
    return 0;
  }

  printer_builder pb = printer_builder(config.font, config.delay, config.colors);
  while(!cin.eof()) {
    string input;
    getline(cin, input);
    
    input.append("\n");

    vector<printer_func_t*> printers = pb.translate(input);
    
    builder_t b;
    for(auto p : printers)
      b.add(p);

    b.run();

    for(size_t i = 0; i < printers.size(); ++i)
      delete printers[i];
 }
  return 0;
}

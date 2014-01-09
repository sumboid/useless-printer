#include <vector>
#include <map>
#include "printer_func.h"
#include "builder.h"
#include "font.h"
#include "doom_font.h"
#include "banner_font.h"


class printer_builder {
private:
  font_t font;
public:
  printer_builder(font_t _font) {
    font = _font;
  }

  std::vector<printer_func_t*> translate(const std::string& message) {
    std::vector<printer_func_t*> result;

    for(auto c : message)
      result.push_back(new printer_func_t(font.get(c), font.height()));

    return result;
  }
};

int main(int argc, const char *argv[])
{
  printer_builder pb = printer_builder(banner_font());
  while(!std::cin.eof()) {
    std::string input;
    std::getline(std::cin, input);
    
    input.append("\n");

    std::vector<printer_func_t*> printers = pb.translate(input);
    
    builder_t b;
    for(auto p : printers)
      b.add(p);

    b.run();

    for(size_t i = 0; i < printers.size(); ++i)
      delete printers[i];
 }
  return 0;
}

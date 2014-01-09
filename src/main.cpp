#include <vector>
#include <map>
#include "printer_func.h"
#include "builder.h"
#include "font.h"
#include "doom_font.h"


class printer_builder {
private:
  font_t font;
public:
  printer_builder(font_t _font) {
    font = _font;
  }

  std::vector<printer_func_t*> translate(const std::string& message) {
    std::vector<printer_func_t*> result;

    for(size_t i = 0; i < message.size(); ++i)
      result.push_back(new printer_func_t(font.get(message[i]), font.height()));

    return result;
  }
};

int main(int argc, const char *argv[])
{
  printer_builder pb = printer_builder(doom_font());
  std::vector<printer_func_t*> printers = pb.translate(std::string("hello world!\n"));

  builder_t b;
 
  for(size_t j = 0; j < printers.size(); ++j)
    b.add(printers[j]);

  b.run();

  for(size_t i = 0; i < printers.size(); ++i)
    delete printers[i];
  return 0;
}

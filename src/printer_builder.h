#include <vector>
#include <string>

#include "printer_func.h"
#include "font.h"


class printer_builder {
private:
  font_t font;
  bool colors;
  size_t delay;

public:
  printer_builder(font_t _font, size_t _delay, bool _colors);
  std::vector<printer_func_t*> translate(const std::string& message);
};
#include "printer_builder.h"

using std::vector;
using std::string;

printer_builder::printer_builder(font_t _font, size_t _delay, bool _colors) {
  font = _font;
  delay = _delay;
  colors = _colors;
}

vector<printer_func_t*> printer_builder::translate(const string& message) {
  vector<printer_func_t*> result;
  for(auto c : message)
    result.push_back(new printer_func_t(font.get(c), font.height(), colors, delay));
  return result;
}
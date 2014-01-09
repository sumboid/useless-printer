#include "printer_func.h"

printer_func_t::printer_func_t(std::vector<std::string> _symbol, int _height, bool colors, size_t _delay) {
  symbol = _symbol;
  current_line = 0;
  height = _height;
  color_flag = colors;
  delay = _delay;
  color = c.get_color();
}

printer_func_t::~printer_func_t() {}

bool printer_func_t::run() {
  if(check_end()) {
    if(color_flag) std::cout << color;
    std::cout << symbol[current_line];
    ++current_line;
    std::cout.flush();
    usleep(delay);
    return !check_end();
  } else return true;
}

bool printer_func_t::check_end() const {
  return current_line < height;
}
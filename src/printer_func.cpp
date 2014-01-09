#include "printer_func.h"

printer_func_t::printer_func_t(std::vector<std::string> _symbol, int _height) {
	symbol = _symbol;
	current_line = 0;
	height = _height;
	color_flag = false;
	set_color();
}

printer_func_t::~printer_func_t() {}

void printer_func_t::set_color() {
	color = c.get_color();
	color_flag = true;
}

bool printer_func_t::run() {
	if(check_end()) {
		if(color_flag) std::cout << color;
		std::cout << symbol[current_line];
		++current_line;
		std::cout.flush();
		usleep(30000);
		return !check_end();
	} else return true;
}

bool printer_func_t::check_end() const {
	return current_line < height;
}
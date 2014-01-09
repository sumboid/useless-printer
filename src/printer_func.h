#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#include "spec_func.h"
#include "color.h"

class printer_func_t : public spec_func_t {
private:
	std::vector<std::string> symbol;
	size_t current_line;
	size_t height;

	std::string color;
	color_t c;

	bool color_flag;
public:
	printer_func_t(std::vector<std::string> _symbol, int _height) {
		symbol = _symbol;
		current_line = 0;
		height = _height;
		color_flag = false;
		set_color();
	}

	virtual ~printer_func_t() {}

	void set_color() {
		color = c.get_color();
		color_flag = true;
	}

	virtual bool run() {
		if(check_end()) {
			if(color_flag) std::cout << color;
			std::cout << symbol[current_line];
			++current_line;
			std::cout.flush();
			usleep(30000);
			return !check_end();
		} else return true;
	}

	bool check_end() {
		return current_line < height;
	}

};
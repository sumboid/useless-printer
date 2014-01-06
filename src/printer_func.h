#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#include "spec_func.h"

class printer_func_t : public spec_func_t {
private:
	std::vector<std::string> symbol;
	size_t current_line;
	size_t height;
public:
	printer_func_t(const char** _symbol, int _height) {
		symbol = std::vector<std::string>(_symbol, _symbol + _height);
		current_line = 0;
		height = _height;
	}

	virtual ~printer_func_t() {}

	virtual bool run() {
		if(check_end()) {
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
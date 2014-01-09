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
	printer_func_t(std::vector<std::string> _symbol, int _height);
	virtual ~printer_func_t();

	void set_color();
	virtual bool run();
	bool check_end() const;
};
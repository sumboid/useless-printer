#pragma once

#include <map>
#include <vector>
#include <string>

class font_t {
private:
	std::map<char, std::vector<std::string> > mapping;
	int h;

protected:
	void add(char s, std::vector<std::string> fs) {
		mapping[s] = fs;
	}

	void set_height(int _height) {
		h = _height;
	}
public:
	font_t() { h = 0; }
	virtual ~font_t() {}

	std::vector<std::string> get(const char symbol) {
		if(mapping.find(symbol) == mapping.end()) return mapping['?'];
		else return mapping[symbol];
	}
	int height() { return h; }
};
#include "font.h"

using std::vector;
using std::string;

void font_t::add(char s, std::vector<std::string> fs) {
	mapping[s] = fs;
}

void font_t::set_height(int _height) {
	h = _height;
}

font_t::font_t() { h = 0; }

font_t::~font_t() {}

vector<string> font_t::get(const char symbol) {
	if(mapping.find(symbol) == mapping.end()) return mapping['?'];
	else return mapping[symbol];
}

int font_t::height() const { return h; }
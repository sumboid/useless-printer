#pragma once

#include <map>
#include <vector>
#include <string>

class font_t {
private:
  std::map<char, std::vector<std::string> > mapping;
  int h;

protected:
  void add(char s, std::vector<std::string> fs);
  void set_height(int _height);

public:
  font_t();
  virtual ~font_t();

  std::vector<std::string> get(const char symbol);
  int height() const;
};
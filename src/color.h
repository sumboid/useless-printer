#pragma once

#include <vector>
#include <string>

class color_t {
private:
  std::vector<std::string> colors;
  static pthread_mutex_t mutex;

  static bool initialized;
  static pthread_mutex_t init_mutex;

  static void init();

public:
  color_t();
  std::string& get_color();
};
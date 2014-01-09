#pragma once
#include <cstdlib>
#include <vector>
#include <string>

class color_t {
private:
	std::vector<std::string> colors;
	static pthread_mutex_t mutex;
public:
	color_t() {
		colors.push_back("\033[0m");
		colors.push_back("\033[31m");
		colors.push_back("\033[32m");
		colors.push_back("\033[33m");
		colors.push_back("\033[34m");
		colors.push_back("\033[35m");
		colors.push_back("\033[36m");
	}

	std::string& get_color() {
		pthread_mutex_lock(&mutex);
		int number = rand() % colors.size();
		pthread_mutex_unlock(&mutex);
		return colors[number];
	}
};

pthread_mutex_t color_t::mutex = PTHREAD_MUTEX_INITIALIZER;
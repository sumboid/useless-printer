#include "color.h"
#include <cstdlib>

using std::string;

pthread_mutex_t color_t::mutex = PTHREAD_MUTEX_INITIALIZER;
bool color_t::initialized = false;
pthread_mutex_t color_t::init_mutex = PTHREAD_MUTEX_INITIALIZER;

void color_t::init() {
	pthread_mutex_lock(&init_mutex);
	if(!initialized) {
		srand(time(0));
		initialized = true;
	}
	pthread_mutex_unlock(&init_mutex);
}

color_t::color_t() {
	colors.push_back("\033[0m");
	colors.push_back("\033[31m");
	colors.push_back("\033[32m");
	colors.push_back("\033[33m");
	colors.push_back("\033[34m");
	colors.push_back("\033[35m");
	colors.push_back("\033[36m");
	init();
}

string& color_t::get_color() {
	pthread_mutex_lock(&mutex);
	int number = rand() % colors.size();
	pthread_mutex_unlock(&mutex);
	return colors[number];
}


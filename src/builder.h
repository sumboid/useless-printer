#pragma once

#include <vector>
#include "spec_thread.h"
#include "spec_func.h"

class builder_t {
private:
	std::vector<spec_thread_t*> threads;

public:
	~builder_t();

	void add(spec_func_t* func);
	void run();
};
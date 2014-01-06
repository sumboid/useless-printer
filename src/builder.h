#pragma once

#include <vector>
#include "spec_thread.h"
#include "spec_func.h"

class builder_t {
private:
	std::vector<spec_thread_t*> threads;

public:
	~builder_t() {
		for(int _ = 0; _ < threads.size(); ++_)
			delete threads[_];
	}

	void add(spec_func_t* func) {
		if(threads.empty())
			threads.push_back(new spec_thread_t(func));
		else
			threads.push_back(new spec_thread_t(func, threads[threads.size() - 1]->get_output()));
	}

	void run() {
		int size = threads.size();
		threads[0]->set_input(threads[size - 1]->get_output());

		for(size_t _ = 0; _ < threads.size(); ++_)
			threads[_]->start();

		sem_post(threads[size - 1]->get_output());

		for(size_t _ = 0; _ < threads.size(); ++_)
			threads[_]->join();
	}
};
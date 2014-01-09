#include "builder.h"

builder_t::~builder_t() {
	for(auto thread : threads)
		delete thread;
}

void builder_t::add(spec_func_t* func) {
	if(threads.empty())
		threads.push_back(new spec_thread_t(func));
	else
		threads.push_back(new spec_thread_t(func, threads[threads.size() - 1]->get_output()));
}

void builder_t::run() {
	int size = threads.size();
	threads[0]->set_input(threads[size - 1]->get_output());
	
	for(auto thread : threads) thread->start();
	sem_post(threads[size - 1]->get_output());
	for(auto thread : threads) thread->join();
}
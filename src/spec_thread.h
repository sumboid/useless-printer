#pragma once

#include <pthread.h>
#include <semaphore.h>
#include "spec_func.h"

class spec_thread_t {
private:
	pthread_t* thread;

	// it would be array of inputs and outputs, but for this problem that enough
	sem_t* input;
	sem_t* output;
	spec_func_t* func;

	bool joined;

public:

	spec_thread_t(spec_func_t* _func = 0, sem_t* _input = 0);
	~spec_thread_t();
	
	void set_function(spec_func_t* _func);
	void set_input(sem_t* _input);
	sem_t* get_output();
	void start();
	void* worker(void);
	static void* worker_helper(void* context);
	void join();		 
};
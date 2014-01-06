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

	spec_thread_t(spec_func_t* _func = 0, sem_t* _input = 0) {
		thread = new pthread_t;
		input = _input;
		output = new sem_t;
		sem_init(output, 0, 0);
		func = _func;

		joined = false;
	}

	
	~spec_thread_t() {
		if(!joined) join();
		delete thread;
		delete output;
	}
	
	void set_function(spec_func_t* _func) {
		func = _func;
	}

	void set_input(sem_t* _input) {
		input = _input;
	}

	sem_t* get_output() {
		return output;
	}

	void start() {
		pthread_create(thread, NULL, &spec_thread_t::worker_helper, this);
	}

	void* worker(void) {
		bool end = false;

		while(!end) {
			sem_wait(input);
			end = func->run();
			sem_post(output);
		}
	}

	static void* worker_helper(void* context) {
		return reinterpret_cast<spec_thread_t*>(context)->worker();
	}

	void join() {
		pthread_join(*thread, NULL);
		joined = true;
	}				 
};
#include "spec_thread.h"

spec_thread_t::spec_thread_t(spec_func_t* _func, sem_t* _input) {
  thread = new pthread_t;
  input = _input;
  output = new sem_t;
  sem_init(output, 0, 0);
  func = _func;

  joined = false;
}

  
spec_thread_t::~spec_thread_t() {
  if(!joined) join();
  delete thread;
  delete output;
}
  
void spec_thread_t::set_function(spec_func_t* _func) {
  func = _func;
}

void spec_thread_t::set_input(sem_t* _input) {
  input = _input;
}

sem_t* spec_thread_t::get_output() {
  return output;
}

void spec_thread_t::start() {
  pthread_create(thread, NULL, &spec_thread_t::worker_helper, this);
}

void* spec_thread_t::worker(void) {
  bool end = false;

  while(!end) {
    sem_wait(input);
    end = func->run();
    sem_post(output);
  }
}

void* spec_thread_t::worker_helper(void* context) {
  return reinterpret_cast<spec_thread_t*>(context)->worker();
}

void spec_thread_t::join() {
  pthread_join(*thread, NULL);
  joined = true;
} 
#pragma once

class spec_func_t {
public:
	virtual ~spec_func_t() {}
	virtual bool run() = 0;
};
#pragma once
#include <iostream>

class Man {
private:
	float value;
	Man* next;
public:
	void set_value(float new_value);
	float get_value();
	Man* get_next();
	void set_next(Man* new_next);

	Man();
	Man(int new_value);
	Man(int new_value, Man *new_next);
	~Man();
};
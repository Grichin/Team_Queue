#include "Man.h"

void Man::set_value(float new_value)
{
	value = new_value;
}

float Man::get_value()
{
	return value;
}

Man* Man::get_next()
{
	return next;
}

void Man::set_next(Man* new_next)
{
	next = new_next;
}

Man::Man()
{
	set_value(10);
	next = NULL;
}

Man::Man(int new_value)
{
	set_value(new_value);
	next = NULL;
}

Man::Man(int new_value, Man *new_next)
{
	set_value(new_value);
	next = new_next;
}

Man::~Man() {}

#pragma once
#include <iostream>
#include "Man.h"

class Queue {
private:
	Man* head;
	Man* tail;
	int count;
public:
	void set_count(int new_count);
	int get_count();
	void set_head(Man *new_head);
	void set_tail(Man *new_tail);

	Man* get_head();
	Man* get_tail();

	void add_con(float value);

	void print();
	bool isEmpty();
	Queue();
	Queue(int count);
};
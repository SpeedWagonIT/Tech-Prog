#pragma once

#include "Element.h"
class X {
	elem  *head;
	elem  *tail;
	int k;
public : 
	X ();
	~X();
	void del();
	void add(int user_value);
	void print_queue();
	int calc();
	void copy_queue();
	X* merge(X* op1);
	elem* get_a();
	elem* get_b();
	int get_k();
	void set_k(int num);
	void set_a(elem* velue);
	void set_b(elem* value);
};
#include "class_X.h"
#include <iostream>
using namespace std;

X::X() {
	head = nullptr;
	tail = nullptr;
	k = 0;
}

X::~X() {
	elem *temp = tail;
	while (temp) {
		temp = tail->Prev;
		delete tail;
		tail = temp;
	}
}

void X::del() {
	if (!k) {
		cout << "Очередь пуста!" << endl;
		return;
	}
	if (k == 1) {
		delete head;
		head = nullptr;
		tail = nullptr;
	}
	else {
		elem* temp = tail;
		while (temp->Prev != head) {
			temp = temp->Prev;
		}
		delete head;
		head = temp;
		head->Prev = nullptr;
	}
	k--;
}

void X::add(int user_value) {
	elem* temp = new elem;
	if (k == 0) {
		temp->Val = user_value;
		temp->Prev = nullptr;
		head = temp; 
		tail = temp;
	}
	else {
		temp->Val = user_value;
		temp->Prev = tail;
		tail = temp;
	}
	k++;
}

void X::print_queue() {
	if (!k) {
		cout << "Очередь пуста!" << endl;
		return;
	}
	elem *temp = get_b();
	int *och = new int[get_k()];
	int l = get_k() - 1;
	for (int i = 0; i < get_k(); ++i) {
		och[l--] = temp->Val;
		temp = temp->Prev;
	}
	cout << "Текущаа очередь:" << endl;
	for (int i = 0; i < get_k(); ++i) {
		cout << "[" << och[i] << "] ";
	}
	delete[] och;
}

int X::calc() {
	
}





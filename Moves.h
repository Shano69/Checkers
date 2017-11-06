#pragma once
#include <string>
using namespace std;

class Moves {
private:
	int top;
	int capacity=100;
	int *storage;
public:
	Moves(int capacity) {
		if (capacity <= 0)
			throw string("Moves capacity must be positive");
		storage = new int[capacity];
		this->capacity = capacity;
		top = -1;
	}

	void push(int value) {
		if (top == capacity)
			throw string("Moves underlying storage is overflow");
		top++;
		storage[top] = value;
	}

	int peek() {
		if (top == -1)
			throw string("Moves is empty");
		return storage[top];
	}

	void pop() {
		if (top == -1)
			throw string("Moves is empty");
		top--;
	}

	bool isEmpty() {
		return (top == -1);
	}

	~Moves() {
		delete[] storage;
	}
};
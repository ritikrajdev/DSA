#ifndef STACK_CPP
#define STACK_CPP

#include "Node.h"

template<typename T>
class Stack {
	Node<T>* top = 0;

	public:

	Stack(){}
	Stack(T data) : top {new Node<T>(data)} {}
	~Stack();

	bool push(T data);
	T pop();
	T top_data();
};

#endif // STACK_CPP

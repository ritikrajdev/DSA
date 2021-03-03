#include <cstdlib>
#include <iostream>
#include "Stack.h"
#include <stdexcept>

template<typename T>
bool Stack<T>::push(T data) {
	try {
		top = new Node<T>(data, top);
		return true;

	} catch (...) {
		return false;
	}
}

template<typename T>
T Stack<T>::pop() {
	try {
		if(top) {
			T data = top->data;
			Node<T>* node_to_delete = top;

			top = top->next;

			delete node_to_delete;
			return data;
		}

		else
			throw std::runtime_error("Top Does not Exists");
	}
	catch (std::runtime_error &topDoesNotExistError) {
		std::cerr << topDoesNotExistError.what() << "\n";
		std::exit(1);
	}
}


template<typename T>
T Stack<T>::top_data() {
	try {
		if(top) return top->data;
		else throw std::runtime_error("Top Does not Exists");
	}
	catch (std::runtime_error &topDoesNotExistError) {
		std::cerr << topDoesNotExistError.what() << "\n";
		std::exit(1);
	}
}

template<typename T>
Stack<T>::~Stack() {
	while (top) {
		this->pop();
	}
}


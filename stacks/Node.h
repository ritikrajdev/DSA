#ifndef NODE_H
#define NODE_H

template<typename T>
class Stack;

template<typename T>
class Node {
public:
	T data;
	Node<T>* next;

	Node(T data = 0, Node<T> *next = 0) : data{data}, next{next} {}
	friend class Stack<T>;
};

#endif // NODE_H

#include <iostream>
#include "Stack.cpp"

int main() {
	int t = 10;
	Stack<int> stack;

	while (t--) {
		if(stack.push(t)) std::cout << "Added " << stack.top_data() << "\n";
	}

	t = 10;
	while (t--) {
		std::cout << "Deleted " << stack.pop() << "\n";
	}

	// For Error Creation
	stack.pop();
}

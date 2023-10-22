//
// Created by daanish on 8/25/23.
//
#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Print the top element of the stack
    std::cout << "Top element: " << myStack.top() << std::endl;

    // Pop elements from the stack
    myStack.pop();
    std::cout << "After popping, top element: " << myStack.top() << std::endl;

    // Check if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Get the size of the stack
    std::cout << "Size of the stack: " << myStack.size() << std::endl;

    return 0;
}

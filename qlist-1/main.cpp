#include <iostream>
#include "stack.h"

int main() {
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(4);
    stack.push(8);

    std::cout << "stack.isEmpty(): " << stack.isEmpty() << std::endl;
    std::cout << "stack.size(): " << stack.size() << std::endl;
    std::cout << "stack.peek(): " << stack.peek() << std::endl;

    return 0;
}

#include "stack.h"

template <typename T>
Stack<T>::Stack() {
}

template <typename T>
void Stack<T>::push(T value) {
    list_.append(value);
}

template <typename T>
void Stack<T>::pop() {
    list_.removeLast();
}

template <typename T>
T Stack<T>::peek() {
    return list_.last();
}

template <typename T>
T Stack<T>::size() {
    return list_.size();
}

template <typename T>
bool Stack<T>::isEmpty() {
    return list_.isEmpty();
}

template class Stack<int>;

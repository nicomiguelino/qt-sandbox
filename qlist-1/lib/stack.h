#ifndef STACK_H
#define STACK_H

#include <QList>

template <typename T>
class Stack {
public:
    Stack();
    void push(T value);
    void pop();
    T peek();
    T size();
    bool isEmpty();
private:
    QList<T> list_;
};

#endif // STACK_H

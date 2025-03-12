#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

// Use inheritance from std::vector (choose public/private) as appropriate
template <typename T>
class Stack 
{
public:
    Stack();
    ~Stack();
    bool empty() const;
    size_t size() const;
    void push(const T& item);
    void pop();  // throws std::underflow_error if empty
    const T& top() const; // throws std::underflow_error if empty
    // Add other members only if necessary
private:
    int size_;
    std::vector<T> data;
};

template <typename T>
Stack<T>::Stack() {
    size_ = 0;
}

template <typename T>
Stack<T>::~Stack() {

}

template <typename T>
bool Stack<T>::empty() const{
    if (size_ == 0) {
        return true;
    }
    else {
        return false;
    }
}

template <typename T>
size_t Stack<T>::size() const{
    return size_;
}

template <typename T>
void Stack<T>::push(const T& item) {
    data.push_back(item);
    size_++;
}

template <typename T>
void Stack<T>::pop() {
    if (empty() == true) {
        throw std::underflow_error("Stack is empty");
    }
    data.pop_back();
    size_--;
}

template <typename T>
const T& Stack<T>::top() const {
    if (empty() == true) {
        throw std::underflow_error("Stack is empty, no top found");
    }
    return data.back();
}
#endif
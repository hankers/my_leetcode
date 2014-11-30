/* two stacks implement a queue */
#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

template <class T>
class MyQueue
{
public:
    MyQueue();
    ~MyQueue();

    void push_back(T elem);
    T pop_front();
    bool empty();

private:
    stack<T> s1, s2;
};

template <class T>
MyQueue<T>::MyQueue()
{
}

template <class T>
MyQueue<T>::~MyQueue()
{
}

template <class T>
void MyQueue<T>::push_back(T elem)
{
    T value;

    if (s1.empty()) {
        s1.push(elem);
    }
    else {
        while (!s1.empty()) {
            value = s1.top();
            s1.pop();
            s2.push(value);
        }
        s1.push(elem);
        while (!s2.empty()) {
            value = s2.top();
            s2.pop();
            s1.push(value);
        }
    }
}

template <class T>
T MyQueue<T>::pop_front()
{
    T value;
    if (!s1.empty()) {
        value = s1.top();
        s1.pop();
        return value;
    }
}

template <class T>
bool MyQueue<T>::empty()
{
    if (s1.empty()) {
        return true;
    }
    return false;
}

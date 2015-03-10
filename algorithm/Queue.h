#include <iostream>
#include <cstdio>

using namespace std;

template <class T, int size>
class Queue
{
    public:
        Queue();
        ~Queue();
        
        void push_back(T elem);
        void pop_front();
        T front();
        T back();
        bool empty();
    private:
        T *elems;
        int tail,begin;
};

template <class T, int size>
Queue<T, size>::Queue(): tail(0),begin(0)
{
    elems = new T[size];
}

template <class T, int size>
Queue<T, size>::~Queue()
{
    delete[] elems;
}

template <class T, int size>
void Queue<T, size>::push_back(T elem)
{
    if ((tail+1)%size == begin)
        cout << "Queue is full" << endl;
    else{
        elems[tail] = elem;
        tail = (tail+1)%size;
    }
}

template <class T, int size>
void Queue<T, size>::pop_front()
{
    if (begin == tail)
        cout << "Queue is empty" << endl;
    else 
        begin = (begin+1)%size;
}

template <class T, int size>
T Queue<T, size>::front()
{
    return elems[begin]; 
}

template <class T, int size>
T Queue<T, size>::back()
{
    return elems[tail]; 
}

template <class T, int size>
bool Queue<T, size>::empty()
{
    if (begin == tail)
        return true;
    return false;
}

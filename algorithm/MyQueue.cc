#include <iostream>
#include <cstdio>
#include "MyQueue.h"

using namespace std;

int main()
{
    MyQueue<int> queue;

    for (int i = 0; i < 5; i ++) {
        queue.push_back(i);
    }
    for (int i = 0; i < 5; i ++) {
        int n = queue.pop_front();
        cout << "n is " << n << endl; 
    }
    if (queue.empty()) {
        cout << "queue is empty" << endl;
    }
    return 0;
}

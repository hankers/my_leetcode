#include <iostream>
#include <cstdio>
#include "Queue.h"

using namespace std;

int main()
{
    Queue<int, 10> queue;

    for (int i = 0; i < 5; i ++) {
        queue.push_back(i);
        cout << "i is " << i << endl;
    }
    for (int i = 0; i < 6; i ++) {
        cout << queue.front() << endl;
        queue.pop_front();
    }
    return 0;
}

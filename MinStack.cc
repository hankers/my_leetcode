#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

class MinStack {
public:
    void push(int x);
    void pop();
    int top();
    int getMin();
private:
    stack<int> minStack, Stack;
};

void MinStack::push(int x) {
    if (minStack.empty()) {
        minStack.push(x);
    }
    else if (x <= minStack.top()){
        minStack.push(x);
    }
    Stack.push(x);
}

void MinStack::pop() {
    int value = Stack.top();
    if (!minStack.empty() && value == minStack.top()) {
        minStack.pop();
    }
    Stack.pop();
}

int MinStack::top() {
    if (!Stack.empty()) {
        return Stack.top();
    }
}

int MinStack::getMin() {
    if (!minStack.empty()) {
        return minStack.top();  
    }
}

int main()
{
    MinStack s;
    s.push(0);
    s.push(1);
    s.push(0);
    cout << s.getMin() << endl;
    s.pop();
    cout << s.getMin() << endl;
    
/*    s.push(2147483646);
    s.push(2147483646);
    s.push(2147483647);
    cout << s.top() << endl;
    s.pop();
    cout << s.getMin() << endl;
    s.pop();
    cout << s.getMin() << endl;
    s.pop();
    s.push(2147483647);
    cout << s.top() << endl;
    cout << s.getMin() << endl;
    s.push(-2147483648);
    cout << s.top() << endl;
    cout << s.getMin() << endl;
    s.pop();
    cout << s.getMin() << endl;
*/
    return 0;
}

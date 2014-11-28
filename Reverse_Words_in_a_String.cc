#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

void reverseWords(string &s)
{
    int len = 0,low,high;
    string answer = "";
    high = low = 0;
    stack<string> str_stack;
    while(high<s.length())
    {

        while(s[low] == ' ')
            high = ++low;
        while(s[high] != ' '&&high < s.length())
            high ++;
        string tmp = "";
        for(int j = low; j<high; j ++)
            tmp += s[j];
        low = high;
        str_stack.push(tmp);
    }
    while(!str_stack.empty())
    {
        answer += str_stack.top();
        answer += " ";
        str_stack.pop();
    }
    cout << answer << endl;
}

int main(){
    string s = "  !!";
    reverseWords(s);
    return 0;
}

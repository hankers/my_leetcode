#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    if(s.empty()) return true;
    string low_s = s;
    string cmp_s;
    cmp_s = "";
    transform(low_s.begin(),low_s.end(),low_s.begin(),::tolower);
    for(int i = 0; i < low_s.length(); i ++)
    {
        if((low_s[i]>='a'&&low_s[i]<'z')||(low_s[i]>='0'&&low_s[i]<='9'))
            cmp_s += low_s[i];
    }
    low_s = cmp_s;
    reverse(cmp_s.begin(),cmp_s.end());
    cout << "low_s:" << low_s << endl;
    cout << "cmp_s:" << cmp_s << endl;

    if(low_s == cmp_s)
        return true;
    return false;
}

int main()
{
    bool flag;
    string s; 
    s = "0k.;r0.k;";
    flag = isPalindrome(s);
    return 0;
}

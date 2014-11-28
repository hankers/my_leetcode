#include <iostream>
#include <cstdio>

using namespace std;

int atoi(const char *str)
{
    int number,negative_flag,cflag,flag;
    number = negative_flag = cflag = 0;

    while (*str != '\0') {
        while (*str == ' ' && !flag) {
            str ++;
        }
        flag =1;
        if (*str == '-') {
            negative_flag = 1;
            cflag ++; 
        }
        else if (*str == '+') {
            negative_flag = 0;
            cflag ++;
        }
        else if (*str >= '0' && *str <= '9'){
            number = number*10 + (*str - '0');
        }
        else {
            break;
        }
        str ++;
    }
    if(cflag > 1) number = 0;
    else if(negative_flag) number = number * (-1);
    return number;
}
int main()
{
    int n;
    n = atoi("   -1200 a22");
    cout << "n is " << n << endl;
    n = atoi("2147483648");
    cout << "n is " << n << endl;
    n = atoi("   10");
    cout << "n is " << n << endl;
    n = atoi("    -100");
    cout << "n is " << n << endl;
    return 0;
}

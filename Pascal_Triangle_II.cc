#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;


//vector<vector<int> > generate(int numRows)
void getRow(int rowIndex)
{
    vector<int> tmp;
    tmp.resize(rowIndex+1);
    tmp[0]  = tmp[rowIndex] = 1;
    for(int i = 1; i <= (rowIndex/2); i ++)
        tmp[i] = tmp[rowIndex-i] = tmp[i-1] * (rowIndex-i+1) / i;
    
}

int main()
{
    getRow(5);
    return 0;
}

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

const int MAX= 1000;

//vector<vector<int> > generate(int numRows)
void generate(int numRows)
{
    int triangle[MAX][MAX];
    vector<vector<int> > answer;
    vector<int> tmp;
    memset(triangle,0,sizeof(triangle));

    for(int i = 0; i < numRows; i ++)
    {
        tmp.clear();
        for(int j = 0; j <= i; j ++)
        {
            if(j == 0)
                triangle[i][j] = 1;
            else
            {
                triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
            }
            tmp.push_back(triangle[i][j]);
        }
        answer.push_back(tmp);
    }   
}

int main()
{
    generate(5);
    return 0;
}

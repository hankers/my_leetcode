#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int numTrees(int n) {
    vector<int> values;
    values.push_back(1);
    int sum;
    for (int i = 1; i <= n; i ++) {
        sum = 0;
        for (int j = 0; j < i; j ++) {
            sum += values[j] * values[i-1-j];
        }
        values.push_back(sum);
    }
    return values[n];
}
int main()
{
    int res;
    res = numTrees(3);
    cout << "answer is " << res << endl;
    return 0;
}

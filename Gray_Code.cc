#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

vector<int> grayCode(int n) {
	vector<int> result;
	for (int i = 0; i < (1<<n); i ++) {
		result.push_back(i^(i>>1));
	}
	return result;
}

int main()
{
	vector<int> result;
	result = grayCode(3);
	vector<int>::iterator it;
	for (it = result.begin(); it != result.end(); it ++)
		cout << *it  << endl;
}

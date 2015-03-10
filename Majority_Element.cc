#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>

using namespace std;

int majorityElement(vector<int> &num) {

	int len = num.size();
	map<int, int> ArrayMap;

	for (int i = 0; i < len; i ++) {
		int element = num[i];
		if (ArrayMap.find(element) != ArrayMap.end()) {
			ArrayMap[element] ++;
		}
		else ArrayMap[element] = 1;
	}

	map<int,int>::iterator it;
	for (it = ArrayMap.begin(); it != ArrayMap.end(); it ++) {
		if (it->second > len/2)
			return it->first;
	}
}

int main()
{
	vector<int> array;
	array.push_back(1);
	array.push_back(2);
	array.push_back(2);
	cout << majorityElement(array) << endl;
	return 0;
}

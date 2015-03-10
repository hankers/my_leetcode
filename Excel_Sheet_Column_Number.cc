#include <iostream>
#include <sstream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int titleToNumber(string s) {
	int length = s.length();
	int num = 0;

	for (int i = 0; i < length; i ++) {
		cout << s[i] << endl;
		num = ((s[i]-'A'+1) + num*26);
		cout << num << endl;
	}
	return num;
}

int main()
{
	string str;
	while(cin >> str) {
		cout << titleToNumber(str);
	}
	return 0;
}

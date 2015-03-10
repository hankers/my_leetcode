#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;

string convertToTitle(int n) {
	string title = "";
	while(n) {
		if (n%26) {
			title += ('A' + (n%26) - 1);
			n /= 26;
		}
		else {
			title += 'Z';
			n /= 26;
			n -= 1;
		}
	}
	reverse(title.begin(), title.end());
	return title;
}

int main()
{
	int n;
	while(cin >> n) {
		cout << convertToTitle(n) << endl;
	}
	return 0;
}

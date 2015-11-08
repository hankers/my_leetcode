#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

bool canWinNim(int n) {
	if (n%4 == 0) return false;
	return true;
}

int main() {
	bool flag = false;
	flag = canWinNim(6);
	if (flag) cout << "True" << endl;
	else cout << "Flase" << endl;		
}

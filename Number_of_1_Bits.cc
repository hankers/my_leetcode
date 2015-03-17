#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdint.h>

using namespace std;

int hammingWeight(uint32_t n) {
	int num = 0;
	for (int i = 0; i < 32; i ++) {
		if (n & (1<<i)) num ++;
	}	
	return num;
}

int main() {
	
	cout << hammingWeight(0) << endl;
	cout << hammingWeight(4) << endl;
	cout << hammingWeight(11) << endl;
	return 0;
}

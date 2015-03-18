#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void sortColors(int A[], int n) {
	int red, white, blue;
	red = white = blue = 0;
	
	for (int i = 0; i < n; i ++) {
		if (A[i] == 0) red ++;
		if (A[i] == 1) white ++;
		if (A[i] == 2) blue ++;
	}

	for (int i = 0; i < n; i ++) {
		if (i < red) A[i] = 0;
		else if (i < (red + white)) A[i] = 1;
		else A[i] = 2;	
	}
}


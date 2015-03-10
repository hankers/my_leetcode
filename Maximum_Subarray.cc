#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int maxSubArray(int A[], int n) {
	int sum = A[0];
	int maxSum = 0;
	for (int i = 1; i < n; i ++) {
		if (maxSum < sum) maxSum = sum;
		if (sum < 0) {
			sum = A[i];
		}
		else sum += A[i];
	}
	return maxSum;
}
int main()
{
	int A[10] = {-2,1,-3,4,-1,2,1,-5,4};
	int n = 9;
	for (int i = 0; i < n; i ++) {
		cout << A[i] << endl;
	}
	cout << maxSubArray(A, n) << endl;
}

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int grid[101][101];

int uniquePaths(int m, int n) {
	if (m == 0 && n == 0) {
		return 0;
	}

	grid[0][0] = 1;
	
	for (int i = 1; i < m; i ++) {
		grid[i][0] = grid[i-1][0];
	}
	for (int i = 1; i < n; i ++) {
		grid[0][i] = grid[0][i-1];
	}
	
	for (int i = 1; i < m; i ++) 
		for (int j = 1; j < n; j ++) {
			grid[i][j] = grid[i-1][j] + grid[i][j-1];
		}	
	return grid[m-1][n-1];
}

int main()
{
	cout << uniquePaths(1,1) << endl;
	cout << uniquePaths(3,7) << endl;
	cout << uniquePaths(3,3) << endl;
	return 0;
}

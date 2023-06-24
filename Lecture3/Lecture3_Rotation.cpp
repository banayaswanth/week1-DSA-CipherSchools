// C++ program to rotate a matrix
// by 90 degrees
#include <bits/stdc++.h>
#define N 3
using namespace std;

// An Inplace function to
// rotate a N x N matrix
// by 90 degrees in
// anti-clockwise direction
void rotateMatrix(int mat[][N])
{
	// Consider all squares one by one
	for (int x = 0; x < N / 2; x++) {
		// Consider elements in group
		// of 4 in current square
		for (int y = x; y < N - x - 1; y++) {
			// Store current cell in
			// temp variable
			int temp = mat[x][y];

			// Move values from right to top
			mat[x][y] = mat[y][N - 1 - x];

			// Move values from bottom to right
			mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];

			// Move values from left to bottom
			mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];

			// Assign temp to left
			mat[N - 1 - y][x] = temp;
		}
	}
}

// Function to print the matrix
void displayMatrix(int mat[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

/* Driver code */
int main()
{
	// Test Case 1
	int mat[N][N] = { { 1, 2, 3 },
					{ 4, 5, 6 },
					{ 7, 8, 9},
					 };

	// Function call
	rotateMatrix(mat);

	// Print rotated matrix
	displayMatrix(mat);

	return 0;
}

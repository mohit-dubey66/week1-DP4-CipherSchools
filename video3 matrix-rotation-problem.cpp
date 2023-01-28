#include <bits/stdc++.h>

using namespace std;

void rotateMatrix(int mat[][N])
{
    // Transpose of a matrix
    for (int i = 0; i < N; i++)
        for (int j = i; j < N; j++)
            swap(mat[i][j], mat[j][i]);

    // Reverse columns
    for (int i = 0; i < N; i++)
        for (int j = 0, k = N - 1; j < k; j++, k--)
            swap(mat[j][i], mat[k][i]);
}

int main(){
	    int mat[3][3] = { {1, 2, 3},
		      {4, 5, 6},
		      {7, 8, 9} };
	rotateMatrix(mat[3][3]);
}
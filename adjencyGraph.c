
#include <stdio.h>
int n, m;

void createAdjmatrix(int Adj[][n+ 1],
					int arr[][2])
{


	for (int i = 0; i < n+ 1; i++) {

		for (int j = 0; j < n+ 1; j++) {
			Adj[i][j] = 0;
		}
	}

	for (int i = 0; i < m; i++) {
		int x = arr[i][0];
		int y = arr[i][1];

		Adj[x][y] = 1;
		Adj[y][x] = 1;
	}
}

void printAdjmatrix(int Adj[][n+ 1])
{

	for (int i = 1; i < n+ 1; i++) {
		for (int j = 1; j < n+ 1; j++) {
			printf("%d ", Adj[i][j]);
		}
		printf("\n");
	}
}

int main()
{

	n= 5;

	int arr[][2]
		= { { 1, 2 }, { 2, 3 },
			{ 4, 5 }, { 1, 5 } };

	m = sizeof(arr) / sizeof(arr[0]);

	int Adj[n+ 1][n+ 1];

	createAdjmatrix(Adj, arr);


	printAdjmatrix(Adj);

	return 0;
}

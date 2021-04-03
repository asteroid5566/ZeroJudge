#include <iostream>
using namespace std;

int main()
{
	int R, C, i, j, k, l, find = 0, notFind = 0;
	
	cin >> R >> C;
	int arr[R][C];
	int detector[R][C];
	
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			cin >> arr[i][j];
			detector[i][j] = 0;
		}
	}
	
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			if (arr[i][j] == 5) {
				for (k = i - 1; k <= i + 1; k++) {
					for (l = j - 1; l <= j + 1; l++) {
						if (((k >= 0 && k < R)) && ((l >= 0 && l < C)) && arr[k][l] == 5) {
							if (!(k == i && l == j)) {
								detector[i][j] = 1;
								detector[k][l] = 1;
							}
						}
					}
				}
			}
		}
	}
	
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			if (arr[i][j] == 1) {
				for (k = i - 1; k <= i + 1; k++) {
					for (l = j - 1; l <= j + 1; l++) {
						if ((k >= 0 && k < R) && (l >= 0 && l < C) && (arr[k][l] == 5 && detector[k][l] == 0)) {
							arr[i][j] = 0;
							find++;
							goto esc;
						}
					}
				}
				esc:;
			}
		}
	}
	
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			if (arr[i][j] == 1)
				notFind++;
		}
	}
	
	cout << find << " " << notFind << endl;

	return 0;
} 

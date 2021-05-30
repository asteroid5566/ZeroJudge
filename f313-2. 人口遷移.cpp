#include <iostream>
using namespace std;

int main()
{
	int R, C, K, M, max = -999999, min = 999999, i, j;
	cin >> R >> C >> K >> M;
	int arr[R][C], arr2[R][C];
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			cin >> arr[i][j];
			arr2[i][j] = 0;
		}
	}
	
	while (M--) {
		for (i = 0; i < R; i++) {
			for (j = 0; j < C; j++) {
				if (arr[i][j] != -1) {
					if (arr[i + 1][j] != -1 && i + 1 < R) {
						arr2[i + 1][j] += arr[i][j] / K;
						arr2[i][j] -= arr[i][j] / K;
					}
					if (arr[i][j + 1] != -1 && j + 1 < C) {
						arr2[i][j + 1] += arr[i][j] / K;
						arr2[i][j] -= arr[i][j] / K;
					}
					if (arr[i - 1][j] != -1 && i - 1 >= 0) {
						arr2[i - 1][j] += arr[i][j] / K;
						arr2[i][j] -= arr[i][j] / K;
					}
					if (arr[i][j - 1] != -1 && j - 1 >= 0) {
						arr2[i][j - 1] += arr[i][j] / K;
						arr2[i][j] -= arr[i][j] / K;
					}
				}
			}
		}
		for (i = 0; i < R; i++) {
			for (j = 0; j < C; j++) {
				if (arr[i][j] != -1) {
					arr[i][j] += arr2[i][j];
					arr2[i][j] = 0;
				}
			}
		}
	}
	
	for (i = 0; i < R; i++)
		for (j = 0; j < C; j++) {
			if (arr[i][j] > max && arr[i][j] != -1)
				max = arr[i][j];
			if (arr[i][j] < min && arr[i][j] != -1)
				min = arr[i][j];
		}
	cout << min << "\n" << max << endl;
	return 0;
}

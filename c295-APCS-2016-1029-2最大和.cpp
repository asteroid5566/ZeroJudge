#include <iostream>
using namespace std;

int main()
{
	int arr[20][20], max, N, M, i, j, S = 0, findFlag = 0, firstFlag = 0;
	cin >> N >> M;
	int arr2[N];
	for (i = 0; i < N; i++) {
		max = 0;
		for (j = 0; j < M; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max)
				max = arr[i][j];
		}
		arr2[i] = max;
		S += max;
	}
	cout << S << endl;
	for (i = 0; i < N; i++) {
		if (S % arr2[i] == 0) {
			findFlag = 1;
			if (!firstFlag)
				firstFlag = 1;
			else
				cout << " ";
			cout << arr2[i];
		}
	}
	if (!findFlag)
		cout << "-1" << endl;
	return 0;
}

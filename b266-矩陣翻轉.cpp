// https://zerojudge.tw/ShowProblem?problemid=b266
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int r, c, m, i, j, k;
	bool spin;
	while (cin >> r >> c >> m) {
		int arr[r][c], arr2[c][r], order[m];
		spin = false;
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++)
				cin >> arr[i][j];
		}
		for (i = 0; i < m; i++)
			cin >> order[i];

		for (i = m - 1; i >= 0; i--) {
			if (order[i] == 0) {                            	//spin
				if (!spin) {
					for (j = 0; j < r; j++) {
						for (k = 0; k < c; k++) {
							arr2[c - 1 - k][j] = arr[j][k];
						}
					}
				}
				else {
					for (j = 0; j < r; j++) {
						for (k = 0; k < c; k++) {
							arr[c - 1 - k][j] = arr2[j][k];
						}
					}
				}
				
				swap(r, c);
				spin = spin ? false : true;
			}
			else {                                          	//flip
				if (!spin) {
					for (j = 0; j < r / 2; j++) {
						for (k = 0; k < c; k++)
							swap(arr[j][k], arr[r - j - 1][k]);
					}
				}
				else {
					for (j = 0; j < r / 2; j++) {
						for (k = 0; k < c; k++)
							swap(arr2[j][k], arr2[r - j - 1][k]);
					}
				}
			}
		}

		cout << r << " " << c << endl;
		if (!spin) {
			for (i = 0; i < r; i++) {
				cout << arr[i][0];
				for (j = 1; j < c; j++)
					cout << " " << arr[i][j];
				cout << endl;
			}
		}
		else {
			for (i = 0; i < r; i++) {
				cout << arr2[i][0];
				for (j = 1; j < c; j++)
					cout << " " << arr2[i][j];
				cout << endl;
			}
		}
	}
	return 0;
}

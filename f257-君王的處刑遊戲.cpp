// https://zerojudge.tw/ShowProblem?problemid=f257
#include <iostream>
using namespace std;

int main()
{
	int n, k, i, j, x, y;
	
	while (cin >> n >> k) {
		int arr[n][n];
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				arr[i][j] = 0;
		
		while (k--) {
			cin >> x >> y;
			if (arr[y][x] == -1)
				continue;
			
			arr[y][x] = -1;
			for (i = y - 1; i <= y + 1; i++) {
				for (j = x - 1; j <= x + 1; j++) {
					if (i == y && j == x)
						continue;
					if (i >= 0 && i < n && j >= 0 && j < n) {
						if (arr[i][j] != -1)
							arr[i][j]++;
					}
				}
			}
		}
		
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (arr[i][j] == -1)
					cout << "x";
				else
					cout << arr[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}

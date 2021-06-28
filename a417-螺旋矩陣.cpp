#include <iostream>
#include <iomanip>
#include <memory.h>
using namespace std;

int main()
{
	int t, m, n, i, j, dir, x, y, num, count;       //direction 0:up, 1:right, 2:down, 3:left
	cin >> t;
	
	while (t--) {
		cin >> n >> m;
		int arr[n][n], flag[n][n];
		memset(arr, 0, sizeof(arr));
		memset(flag, 0, sizeof(flag));
		
		arr[0][0] = flag[0][0] = 1;
		x = y = 0;
		num = 2;

		dir = m == 1 ? 1 : 2;
		
		while (1) {
			switch (dir) {
				case 0:
					if (y - 1 < 0 || flag[y - 1][x] == 1) {
						if (m == 1) {
							dir++;
							x++;
						}
						else {
							dir = 3;
							x--;
						}
					}
					else
						y--;
					break;
				case 1:
					if (x + 1 >= n || flag[y][x + 1] == 1) {
						if (m == 1) {
							dir++;
							y++;
						}
						else {
							dir--;
							y--;
						}
					}
					else
						x++;
					break;
				case 2:
					if (y + 1 >= n || flag[y + 1][x] == 1) {
						if (m == 1) {
							dir++;
							x--;
						}
						else {
							dir--;
							x++;
						}
					}
					else
						y++;
					break;
				case 3:
					if (x - 1 < 0 || flag[y][x - 1] == 1) {
						if (m == 1) {
							dir = 0;
							y--;
						}
						else {
							dir--;
							y++;
						}
					}
					else
						x--;
					break;
			}

			if (x < 0 || y < 0 || x == n || y == n || flag[y][x] == 1)
				break;

			arr[y][x] = num++;
			flag[y][x] = 1;
		}
		
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cout << setw(5) << arr[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

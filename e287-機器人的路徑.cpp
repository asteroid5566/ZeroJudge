#include <iostream>
using namespace std;

int main()
{
	int n, m, i, j, row, col, newRow, newCol, min = 1000000, sum = 0;
	cin >> n >> m;
	int arr[n][m], flag[n][m];
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			flag[i][j] = 1;
			
			cin >> arr[i][j];
			if (arr[i][j] < min) {
				min = arr[i][j];
				row = i;
				col = j;
			}
		}
	}
	
	while (1) {
		flag[row][col] = 0;
		sum += arr[row][col];

		if (row - 1 >= 0 && flag[row - 1][col])
			min = arr[row - 1][col];
		else if (col + 1 < m && flag[row][col + 1])
			min = arr[row][col + 1];
		else if (col - 1 >= 0 && flag[row][col - 1])
			min = arr[row][col - 1];
		else if (row + 1 < n && flag[row + 1][col])
			min = arr[row + 1][col];
		else
			break;
		
		if ((row - 1 >= 0 && flag[row - 1][col]) && arr[row - 1][col] <= min) {
			min = arr[row - 1][col];
			newRow = row - 1;
			newCol = col;
		}
		
		if ((col + 1 < m && flag[row][col + 1]) && arr[row][col + 1] <= min) {
			min = arr[row][col + 1];
			newRow = row;
			newCol = col + 1;
		}
		
		if ((col - 1 >= 0 && flag[row][col - 1]) && arr[row][col - 1] <= min) {
			min = arr[row][col - 1];
			newRow = row;
			newCol = col - 1;
		}
		
		if ((row + 1 < n && flag[row + 1][col]) && arr[row + 1][col] <= min) {
			min = arr[row + 1][col];
			newRow = row + 1;
			newCol = col;
		}
		
		row = newRow;
		col = newCol;
	}
	
	cout << sum << endl;
	return 0;
}

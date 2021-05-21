#include <iostream>
using namespace std;

int main()
{
	int N, count = 0, move = 1, dir, i, j, k;
	cin >> N >> dir;
	int arr[N][N];
	
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			cin >> arr[i][j];
	
	i = j = N / 2;
	
	cout << arr[i][j];
	while (i >= 0 && i < N && j >= 0 && j < N) {
		for (k = 0; k < move && i >= 0 && i < N && j >= 0 && j < N; k++) {
			switch (dir) {
				case 0:
					j--;
					break;
				case 1:
					i--;
					break;
				case 2:
					j++;
					break;
				case 3:
					i++;
					break;
			}
			if (i >= 0 && i < N && j >= 0 && j < N)
				cout << arr[i][j];
		}
		
		count++;
		if (count == 2) {
			count = 0;
			move++;
		}	
		dir++;
		if (dir == 4)
			dir = 0;
	}
	
	cout << endl;
	return 0;
}

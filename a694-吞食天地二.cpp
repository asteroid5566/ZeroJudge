#include <iostream>
using namespace std;

int main()
{
	int n, m, i, j, x1, x2, y1, y2, sum;
	
	while (cin >> n >> m) {
		int arr[n + 1][n + 1];
		
		for (i = 1; i <= n; i++) {
			arr[i][0] = 0;
			for (j = 1; j <= n; j++) {
				cin >> arr[i][j];
				arr[i][j] += arr[i][j - 1];
			}
		}
		
		while (m--) {
			sum = 0;
			cin >> x1 >> y1 >> x2 >> y2;
			for (i = x1; i <= x2; i++) {
				sum += arr[i][y2] - arr[i][y1 - 1];
			}
			cout << sum << endl;
		}
	}
	return 0;
}

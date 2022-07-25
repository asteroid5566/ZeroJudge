// https://zerojudge.tw/ShowProblem?problemid=f606
#include <iostream>
using namespace std;

int main()
{
	int n, m, k, i, j, cost, min = 999999999;
	cin >> n >> m >> k;
	int q[n][m], arr[m][m], c[n];
	
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> q[i][j];
	
	while (k--) {
		for (i = 0; i < m; i++)
			for (j = 0; j < m; j++)
				arr[i][j] = 0;
		for (i = 0; i < n; i++)
			cin >> c[i];

		cost = 0;
		
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				arr[c[i]][j] += q[i][j];
		
		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				if (i == j)
					cost += arr[i][j];
				else if (arr[i][j] <= 1000)
					cost += arr[i][j] * 3;
				else
					cost += 3000 + (arr[i][j] - 1000) * 2;
			}
		}
		
		if (cost < min)
			min = cost;
	}
	cout << min << endl;
	return 0;
}

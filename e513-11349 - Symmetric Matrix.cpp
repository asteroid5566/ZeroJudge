// https://zerojudge.tw/ShowProblem?problemid=e513
#include <iostream>
using namespace std;

long long m[101][101];

int main()
{
	char c;
	long long t, n, flag, i, j, k;
	cin >> t;
	
	for (i = 0; i < t; i++) {
		cin >> c >> c;
		cin >> n;
		flag = 1;
		for (j = 0; j < n; j++) {
			for (k = 0; k < n; k++) {
				cin >> m[j][k];
				if (m[j][k] < 0)
					flag = 0;
			}
		}

		for (j = 0; j < n && flag; j++) {
			for (k = 0; k < n; k++) {
				if (m[j][k] != m[n - j - 1][n - k - 1]) {
					flag = 0;
					break;
				}
			}
		}
		
		cout << "Test #" << i + 1 << ": ";
		if (flag)
			cout << "Symmetric.\n";
		else
			cout << "Non-symmetric.\n";
	}
	return 0;
}

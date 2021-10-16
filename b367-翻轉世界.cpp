#include <iostream>
using namespace std;

int main()
{
	int t, n, m, flag, i, j;
	cin >> t;

	while (t--) {
		cin >> n >> m;
		int arr[n * m];
		flag = 1;

		for (i = 0; i < n * m; i++) {
			cin >> arr[i];
		}

		for (i = 0, j = n * m - 1; i < j; i++, j--) {
			if (arr[i] != arr[j]) {
				flag = 0;
				break;
			}
		}
		
		if (flag)
			cout << "go forward" << endl;
		else
			cout << "keep defending" << endl;
	}
	return 0;
}

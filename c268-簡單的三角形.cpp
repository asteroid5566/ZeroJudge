#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t, n, i, flag, temp;
	cin >> t;
	
	while (t--) {
		cin >> n;
		cin.ignore();
		if (n > 45) {
			cin.ignore(1e9, '\n');
			cout << "YES\n";
		}
		else {
			flag = 0;
			int arr[n];
			for (i = 0; i < n; i++)
				cin >> arr[i];
			
			sort(arr, arr + n);
			
			for (i = 0; i < n - 2; i++) {
				if (arr[i] + arr[i + 1] > arr[i + 2]) {
					flag = 1;
					break;
				}
			}
			
			if (flag) {
				cout << "YES\n";
			}
			else
				cout << "NO\n";
		}
	}
	return 0;
}

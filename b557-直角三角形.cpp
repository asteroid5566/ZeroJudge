#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t, n, i, j, k, count;
	cin >> t;

	while (t--) {
		count = 0;
		cin >> n;
		int arr[n];
		for (i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);

		for (i = 0; i < n - 2; i++) {
			for (j = i + 1; j < n - 1; j++) {
				for (k = j + 1; k < n; k++) {
					if (arr[i] * arr[i] + arr[j] * arr[j] == arr[k] * arr[k])
						count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}

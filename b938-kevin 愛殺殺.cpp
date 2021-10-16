#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, k, temp;
	cin >> n >> m;
	
	int arr[n + 1];
	for (k = 1; k < n; k++)
		arr[k] = k + 1;
	arr[n] = 0;

	while (m--) {
 		cin >> k;

		if (arr[k] == 0)
			cout << "0u0 ...... ?\n";
		else {
			cout << arr[k] << '\n';
			temp = arr[k];
			arr[k] = arr[arr[k]];
			arr[temp] = 0;
		}
	}
	return 0;
}

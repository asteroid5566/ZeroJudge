#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, i, temp;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);
	
	cout << arr[0];
	for (i = 1; i < n; i++)
		cout << ' ' << arr[i];
	cout << '\n';
	
	for (i = n - 1; i >= 0; i--) {
		if (i != n - 1)
			cout << ' ';
		cout << arr[i];
		temp = arr[i];
		while (arr[i - 1] == temp)
			i--;
		if (arr[i] != temp)
			i++;
	}
	return 0;
}

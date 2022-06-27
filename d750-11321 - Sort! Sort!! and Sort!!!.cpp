// https://zerojudge.tw/ShowProblem?problemid=d750
#include <iostream>
#include <algorithm>
using namespace std;

int m;

bool cmp(int a, int b)
{
	if (a % m < b % m)
		return true;
	else if (a % m > b % m)
		return false;
	else {
		if (a % 2 && !b % 2)
			return true;
		else if (!a % 2 && b % 2)
			return false;
		else {
			if (a % 2)
				return a > b;
			else
				return a < b;
		}
	}
}

int main()
{
	int n, i;
	
	while (cin >> n >> m) {
		if (!n && !m) {
			cout << "0 0\n";
			break;
		}
		int arr[n];

		for (i = 0; i < n; i++)
			cin >> arr[i];

		sort(arr, arr + n, cmp);

		cout << n << " " << m << "\n";
		for (i = 0; i < n; i++)
			cout << arr[i] << "\n";
	}
	return 0;
}

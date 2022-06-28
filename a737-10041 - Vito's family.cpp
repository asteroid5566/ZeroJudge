// https://zerojudge.tw/ShowProblem?problemid=a737
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int r, i, sum, m;
	cin >> r;
	while (cin >> r) {
		int arr[r];
		
		for (i = 0; i < r; i++)
			cin >> arr[i];
		
		sort(arr, arr + r);
		
		if (r % 2)
			m = arr[r / 2];
		else
			m = (arr[r / 2] + arr[r / 2 - 1]) / 2;

		sum = 0;
		for (i = 0; i < r; i++)
			sum += abs(arr[i] - m);
		
		cout << sum << "\n";
	}
	return 0;
}

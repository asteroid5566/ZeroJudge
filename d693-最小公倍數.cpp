// https://zerojudge.tw/ShowProblem?problemid=d693
#include <iostream>
#include <algorithm>
using namespace std;

int GCD(long long x, long long y)
{
	if (!y)
		return x;
	else
		return GCD(y, x % y);
}

int main()
{
	long long arr[100], n, i, j, ans;

	while (cin >> n && n) {
		for (i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		
		for (i = 0; i < n - 1; i++) {
			j = i + 1;
			while (j < n && arr[i] == arr[j])
				arr[j++] = 0;
		}
		
		ans = arr[0];
		for (i = 1; i < n; i++) {
			if (arr[i])
				ans = ans * arr[i] / GCD(ans, arr[i]);
		}
		
		cout << ans << endl;
	}
	return 0;
}

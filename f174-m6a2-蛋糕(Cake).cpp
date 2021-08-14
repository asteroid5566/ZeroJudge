// https://zerojudge.tw/ShowProblem?problemid=f174
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k, max = 0, i, j, sum;
	cin >> n >> k;
	int arr[n];
	
	for (i = 0; i < n; i++)
		cin >> arr[i];
	
	for (i = 0; i < n; i++) {
		if (arr[i] <= 0)
			continue;
		sum = 0;
		for (j = i; j < i + k; j++) {
			if (j == n)
				goto esc;
			sum += arr[j];
			if (sum <= 0) {
				i = j;
				break;
			}
			if (sum > max)
				max = sum;
		}
	}
	esc:
	cout << max << "\n";
	return 0;
}

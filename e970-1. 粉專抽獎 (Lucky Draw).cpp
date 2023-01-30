// https://zerojudge.tw/ShowProblem?problemid=e970
#include <iostream>
using namespace std;

int main()
{
	int n, b, sum = 0, i;
	cin >> n;
	
	int arr[n];
	for (i = 0; i < n; i++)
		cin >> arr[i];
	b = arr[n - 1];
	
	for (i = 1; i <= n; i++) {
		if (i % b == 1) {
			sum += arr[i - 1];
		}
	}
	
	if (sum % n == 0)
		cout << n << " " << arr[n - 1] << endl;
	else
		cout << sum % n << " " << arr[sum % n - 1] << endl;
	return 0;
}

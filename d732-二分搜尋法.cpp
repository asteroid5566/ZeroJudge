// https://zerojudge.tw/ShowProblem?problemid=d732
#include <iostream>
using namespace std;

int main()
{
	int i, n, k, t, left, right, mid, count = 0, flag;
	cin >> n >> k;
	
	int arr[n];
	for (i = 0; i < n; i++)
		cin >> arr[i];

	for (i = 0; i < k; i++) {
		cin >> t;
		left = 0;
		right = n - 1;
		flag = 0;
		
		while (left <= right) {
			mid = (left + right) / 2;
			if (arr[mid] == t) {
				cout << mid + 1 << endl;
				flag = 1;
				break;
			}
			else if (arr[mid] < t)
				left = mid + 1;
			else
				right = mid - 1;
		}
		
		if (!flag)
			cout << 0 << endl;
	}
	return 0;
}

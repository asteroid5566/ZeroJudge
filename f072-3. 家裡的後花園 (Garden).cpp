// https://zerojudge.tw/ShowProblem?problemid=f072
#include <iostream>
using namespace std;

int main()
{
	int n, count = 0, i, cur;
	cin >> n;
	int arr[n];
	
	for (i = 0; i < n; i++)
		cin >> arr[i];
	
	for (i = 0; i < n; i++) {
		if (arr[i] == 1)
			break;
		else
			arr[i] = -1;
	}
	
	for (i = n - 1; i >= 0; i--) {
		if (arr[i] == 1)
			break;
		else
			arr[i] = -1;
	}
	
	for (i = 0; i < n; i++) {
		if (arr[i] == 0) {
			if (i - 1 >= 0 && arr[i - 1] == 9)
				continue;
			if (i + 1 < n && arr[i + 1] == 9)
				continue;
			count++;
		}
	}
	
	cout << count << endl;
	return 0;
}

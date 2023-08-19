// https://zerojudge.tw/ShowProblem?problemid=f376
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int i, n, arr[100000], idx, min = 999999999, p, sum;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr + n);
	
	if (n % 2)
		idx = n / 2;
	else {
		p = arr[n / 2 - 1];
		sum = 0;
		for (i = 0; i < n; i++)
			sum += abs(arr[i] - p);
		if (sum < min) {
			idx = n / 2 - 1;
			min = sum;
		}
		
		p = arr[n / 2];
		sum = 0;
		for (i = 0; i < n; i++)
			sum += abs(arr[i] - p);
		if (sum < min)
			idx = n / 2 - 1;
	}
	
	cout << arr[idx];
	return 0;
}

// https://zerojudge.tw/ShowProblem?problemid=f408
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(int a, int b)
{
	return abs(a) < abs(b);
}

int main()
{
	int n, i, count = 0, flag;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
		cin >> arr[i];
		
	sort(arr, arr + n, cmp);
	
	flag = arr[0];
	
	for (i = 0; i < n; i++) {
		if (flag > 0 && arr[i] < 0 || flag < 0 && arr[i] > 0) {
			count++;
			flag = arr[i];
		}
	}
	
	cout << count;
	return 0;
}

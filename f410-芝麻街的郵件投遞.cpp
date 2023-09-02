// https://zerojudge.tw/ShowProblem?problemid=f410
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
	if (a % 2 == 0 && b % 2 == 1)
		return true;
	else if (a % 2 == 1 && b % 2 == 0)
		return false;
	else {
		if (a % 2)
			return a > b;
		else
			return a < b;
	}
}

int main()
{
	int n, i;
	cin >> n;
	int arr[n];
	
	for (i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr + n, cmp);
	
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}

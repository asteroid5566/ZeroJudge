// https://zerojudge.tw/ShowProblem?problemid=f073
#include <iostream>
using namespace std;

int main()
{
	int n, i, k;
	cin >> n;
	string a[n];
	
	for (i = 0; i < n; i++)
		cin >> a[i];
	
	cin >> k;
	
	cout << a[k];
	for (i = k + 1; i < n; i++)
		cout << " " << a[i];
	
	for (i = 0; i < k; i++)
		cout << " " << a[i];
	return 0;
}

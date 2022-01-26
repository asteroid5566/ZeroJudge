// https://zerojudge.tw/ShowProblem?problemid=d634
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int i, j, n, index;
	string min;
	cin >> n;
	cin.ignore();
	string arr[n];
	
	for (i = 0; i < n; i++)
		getline(cin, arr[i]);
	
	sort(arr, arr + n);
	
	for (i = 0; i < n; i++)
		cout << arr[i] << endl;
	return 0;
}

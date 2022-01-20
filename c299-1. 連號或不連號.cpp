// https://zerojudge.tw/ShowProblem?problemid=c299
#include <iostream>
using namespace std;

int main()
{
	int n, i, t, min = 999999999, max = -999999999;
	cin >> n;
	
	for (i = 0; i < n; i++) {
		cin >> t;
		if (t > max)
			max = t;
		if (t < min)
			min = t;
	}
	
	cout << min << " " << max << " ";
	if (max - min == n - 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}

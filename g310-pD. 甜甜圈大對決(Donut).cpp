// https://zerojudge.tw/ShowProblem?problemid=g310
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x[1000000], y[1000000], n, i, win, idx;
	
	cin >> n;
	
	win = idx = 0;
	for (i = 0; i < n; i++)
		cin >> x[i];
	for (i = 0; i < n; i++) {
		cin >> y[i];
		if (y[i] > x[idx]) {
			win++;
			idx++;
		}
	}
	cout << win << "\n";

	return 0;
}

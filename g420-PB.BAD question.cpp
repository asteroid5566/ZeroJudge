// https://zerojudge.tw/ShowProblem?problemid=g420
#include <iostream>
using namespace std;

int main()
{
	int i, n, m;
	cin >> n >> m;
	int d[n], h[n];
	
	for (i = 0; i < n; i++)
		cin >> d[i];
	for (i = 0; i < n; i++)
		cin >> h[i];
	
	for (i = 0; i < n; i++) {
		if (m - d[i] < 0)
			break;
		m = m - d[i] + h[i];
	}
	
	cout << i + 1 << endl;
	return 0;
}

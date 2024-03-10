// https://zerojudge.tw/ShowProblem?problemid=g499
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long t, a, b, i, cnt = 0;
	cin >> t;
	
	while (t--) {
		cin >> a >> b;
	
		for (i = 0; i < 32; i++) {
			if (!(a & 1) && b & 1)
				cnt++;
			a >>= 1;
			b >>= 1;
		}
	}
	cout << cnt << "\n";
	return 0;
}

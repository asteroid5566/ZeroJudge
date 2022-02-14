// https://zerojudge.tw/ShowProblem?problemid=d985
#include <iostream>
using namespace std;

int main()
{
	int n, m, a, b, sum, min, i, j;
	cin >> n;
	
	for (i = 1; i <= n; i++) {
		cin >> m;
		sum = 0;
		min = 99999999;
		for (j = 0; j < m; j++) {
			cin >> a >> b;

			b += a * 60;
			if (b < min)
				min = b;

			sum += b;
		}
		sum /= m;
		cout << "Track " << i << ":\nBest Lap: " << min / 60 <<" minute(s) " << min % 60 << " second(s).\nAverage: " << sum / 60
			<< " minute(s) " << sum % 60 << " second(s).\n";
	}
	return 0;
}

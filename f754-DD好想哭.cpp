// https://zerojudge.tw/ShowProblem?problemid=f754
#include <iostream>
using namespace std;

int main()
{
	long long n, m, k, i, j;
	cin >> n;
	
	for (i = 1; i <= n; i++) {
		cin >> m >> k;
		cout << "Case " << i << " :\n";
		for (j = 1; j < k; j++)
			cout << "第" << j << "位 : 拿" << m / k << "元並說DD! BAD!\n";
		cout << "第" << k << "位 : 拿" << m / k + m % k << "元並說DD! BAD!\n";
	}
	return 0;
}

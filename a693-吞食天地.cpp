#include <iostream>
using namespace std;

int main()
{
	int n, m, l, r, i;
	while (cin >> n >> m) {
		int sum[n + 1];
		sum[0] = 0;
		for (i = 1; i <= n; i++) {
			cin >> sum[i];
			sum[i] += sum[i - 1];
		}
		
		for (i = 0; i < m; i++) {
			cin >> l >> r;
			cout << sum[r] - sum[l - 1] << endl;
		}
	}
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int t, n, ans;
	cin >> t;
	while (t--) {
		cin >> n;
		ans = n % 10;
		n /= 10;
		while (n > 0) {
			ans *= n % 10;
			n /= 10;
		}
		cout << ans << endl;
	}
	return 0;
}

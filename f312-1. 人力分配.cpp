#include <iostream>
using namespace std;

int main()
{
	int ans, n, x1, x2, y1, y2, a1, a2, b1, b2, c1, c2;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
	
	for (x1 = 0; x1 <= n; x1++) {
		x2 = n - x1;
		y1 = a1 * x1 * x1 + b1 * x1 + c1;
		y2 = a2 * x2 * x2 + b2 * x2 + c2;
		if (x1 == 0)
			ans = y1 + y2;
		else if (y1 + y2 > ans)
			ans = y1 + y2;
	}
	cout << ans << endl;
	return 0;
}

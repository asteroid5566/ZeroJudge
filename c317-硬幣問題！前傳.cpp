#include <iostream>
using namespace std;

int main()
{
	int n, a, b, x, min, i, j;
	cin >> n;
	
	while (n--) {
		min = 999999;
		cin >> x >> a >> b;
		for (i = 0; i <= x / a; i++) {
			for (j = 0; j <= x / b; j++) {
				if (i * a + j * b == x && i + j < min)
					min = i + j;
			}
		}
		if (min == 999999)
			cout << -1 << endl;
		else
			cout << min << endl;
	}
	return 0;
}

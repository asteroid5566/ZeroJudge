#include <iostream>
using namespace std;

int main()
{
	int x = 0, y = 0, n, a, b;
	cin >> n;

	while (n--) {
		cin >> a >> b;

		switch (a) {
			case 0:
				y += b;
				break;
			case 1:
				x += b;
				break;
			case 2:
				y -= b;
				break;
			case 3:
				x -= b;
		}
	}
	cout << x << " " << y << endl;
	return 0;
}

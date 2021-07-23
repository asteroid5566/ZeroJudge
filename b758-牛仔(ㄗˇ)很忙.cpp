#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	
	y += 30;
	if (y >= 60) {
		y -= 60;
		x++;
	}
	x += 2;
	if (x >= 24)
		x -= 24;

	if (x / 10 == 0)
		cout << '0';
	cout << x << ':';
	if (y / 10 == 0)
		cout << '0';
	cout << y << endl;
	return 0;
}

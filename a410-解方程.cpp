#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a, b, c, d, e, f, delta, deltaX, deltaY;
	cin >> a >> b >> c >> d >> e >> f;
	delta = a * e - b * d;
	deltaX = c * e - f * b;
	deltaY = a * f - d * c;
	if (delta == 0) {
		if (deltaX == 0 && deltaY == 0)
			cout << "Too many" << endl;
		else
			cout << "No answer" << endl;
	}
	else {
  		cout << fixed << setprecision(2) << "x=" << deltaX / delta << endl;
		cout << fixed << setprecision(2) << "y=" << deltaY / delta << endl;
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int gcd(int n1, int n2)
{
	while (1) {
		if (n1 == 0)
			return n2;
		else if (n2 == 0)
			return n1;
		else if (n1 >= n2)
			n1 %= n2;
		else
			n2 %= n1;
	}
}

int main()
{
	int a, b, c, d, g;
	char op;

	while (cin >> a >> b >> c >> d >> op) { 	// a/b, c/d
		switch (op) {
			case '+':
				a *= d;
				c *= b;
				b *= d;
				a += c;
				break;
			case '-':
				a *= d;
				c *= b;
				b *= d;
				a -= c;
				break;
			case '*':
				a *= c;
				b *= d;
				break;
			case '/':
				a *= d;
				b *= c;
		}
		g = gcd(abs(a), abs(b));
		a /= g;
		b /= g;
		
		if ((a < 0 || b < 0) && !(a < 0 && b < 0)) {
			a = abs(a) * -1;
			b = abs(b);
		}
		else if (a < 0 && b < 0) {
			a = abs(a);
			b = abs(b);
		}
		
		if (a % b == 0) {
			a /= b;
			cout << a << endl;
		}
		else
			cout << a << "/" << b << endl;
	}
	return 0;
}

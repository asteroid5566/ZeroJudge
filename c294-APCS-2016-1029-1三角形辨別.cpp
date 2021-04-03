#include <iostream>
using namespace std;

int main()
{
	int a, b, c, temp;
	cin >> a >> b >> c;
	
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	
	cout << a << " " << b << " " << c << endl; 
	
	if (a + b <= c)
		cout << "No" << endl;
	else if (a * a + b * b < c * c)
		cout << "Obtuse" << endl;
	else if (a * a + b * b == c * c)
		cout << "Right" << endl;
	else
		cout << "Acute" << endl;
	return 0;
}

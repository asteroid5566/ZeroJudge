#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	while (cin >> a >> b) {
		while (a != 0 && b != 0) {
			if (a > b) {
				a %= b;
			}
			else
				b %= a;
		}
		
		if (a == 0)
			cout << b << endl;
		else
			cout << a << endl;
	}
	return 0;
}

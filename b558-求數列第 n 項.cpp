#include <iostream>
using namespace std;

int main()
{
	int n, i, a;
	
	while (cin >> n) {
		a = 1;
		for (i = 1; i < n; i++) {
			a += i;
		}
		cout << a << endl;
	}
	return 0;
}

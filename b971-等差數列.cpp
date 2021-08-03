#include <iostream>
using namespace std;

int main()
{
	int a1, an, d;
	cin >> a1 >> an >> d;

	cout << a1;
	while (a1 != an) {
		a1 += d;
		cout << " " << a1;
	}
	return 0;
}

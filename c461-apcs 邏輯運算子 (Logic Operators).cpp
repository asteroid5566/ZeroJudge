#include <iostream>
using namespace std;

int main()
{
	int a, b, c, flag = 0;
	cin >> a >> b >> c;
	
	if ((!(a && b) && !c) || a && b && c) {
		flag = 1;
		cout << "AND"<< endl;
	}
	if ((!(a || b) && !c) || (a || b) && c) {
		flag = 1;
		cout << "OR"<< endl;
	}
	if ((!(a || b) && !c) || ((a || b) && c) && (!a || !b) || a && b && !c) {
		flag = 1;
		cout << "XOR"<< endl;
	}
	if (!flag)
		cout << "IMPOSSIBLE" << endl;
	return 0;
}

// https://zerojudge.tw/ShowProblem?problemid=d984
#include <iostream>
using namespace std;

int main()
{
	long long a, b, c;
	
	while (cin >> a >> b >> c) {
		if (a > b && a > c) {
			if (a > b + c)
				cout << "A" << endl;
			else if (b > c)
				cout << "B" << endl;
			else
				cout << "C" << endl;
		}
		else if (b > a && b > c) {
			if (b > a + c)
				cout << "B" << endl;
			else if (a > c)
				cout << "A" << endl;
			else
				cout << "C" << endl;
		}
		else {
			if (c > a + b)
				cout << "C" << endl;
			else if (a > b)
				cout << "A" << endl;
			else
				cout << "B" << endl;
		}
	}
	return 0;
}

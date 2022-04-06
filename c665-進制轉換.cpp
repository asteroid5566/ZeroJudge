// https://zerojudge.tw/ShowProblem?problemid=c665
#include <iostream>
using namespace std;

int main()
{
	int dec, b1, b2, base, i;
	string from, to;

	while (cin >> from >> b1 >> b2) {
		dec = 0;
		base = 1;
		for (i = from.size() - 1; i >= 0; i--) {
			if (from[i] <= '9')
				dec += (from[i] - '0') * base;
			else
				dec += (from[i] - 'A' + 10) * base;
			base *= b1;
		}
		
		to = "";
		while (dec > 0) {
			if (dec % b2 >= 10) {
				string temp(1, dec % b2 - 10 + 'A');
				to.insert(0, temp);
			}
			else {
				string temp(1, dec % b2 + '0');
				to.insert(0, temp);
			}
			dec /= b2;
		}
		cout << to << endl;
	}
	return 0;
}

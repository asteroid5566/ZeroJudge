// https://zerojudge.tw/ShowProblem?problemid=d623
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float det, a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		if (!a && !b && !c && !d)
			break;

		det = a * d - b * c;
		if (!det) {
			cout << "cheat!" << endl;
			break;
		}
		
		cout << fixed << setprecision(5) << d / det << " " << -b / det <<
			"\n" << -c / det << " " << a / det << endl;
	}
	return 0;
}

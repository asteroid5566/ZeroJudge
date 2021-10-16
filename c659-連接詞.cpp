// https://zerojudge.tw/ShowProblem?problemid=c659
#include <iostream>
using namespace std;

int main()
{
	string c, s;
	cin >> c;
	cin >> s;
	cout << s;
	while (cin >> s)
		cout << " " << c << " " << s;
	return 0;
}

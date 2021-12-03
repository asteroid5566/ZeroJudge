// https://zerojudge.tw/ShowProblem?problemid=d460
#include <iostream>
using namespace std;

int main()
{
	int y;
	cin >> y;
	y <= 5 ? cout << 0 : y <= 11 ? cout << 590 : y <= 17 ? cout << 790 : y <= 59 ? cout << 890 : cout << 399;
	cout << endl;
	return 0;
}

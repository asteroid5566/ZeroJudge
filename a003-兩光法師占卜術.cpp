// https://zerojudge.tw/ShowProblem?problemid=a003
#include <iostream>
using namespace std;

int main()
{
	int m, d, s;
	cin >> m >> d;
	s = (m * 2 + d) % 3;

	switch (s)
	{
		case 0:
			cout << "´¶³q" << endl;
			break;
		case 1:
			cout << "¦N" << endl;
			break;
		case 2:
			cout << "¤j¦N" << endl;
	}
	return 0;
}

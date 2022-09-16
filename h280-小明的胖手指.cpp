// https://zerojudge.tw/ShowProblem?problemid=h280
#include <iostream>
using namespace std;

int main()
{
	char c;
	while (cin >> noskipws >> c) {
		if (c != '\n')
			cout << c;
	}
	return 0;
}

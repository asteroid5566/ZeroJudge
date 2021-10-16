// https://zerojudge.tw/ShowProblem?problemid=c382
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char c;
	while (cin >> a >> c >> b) {
		switch (c) {
			case '+':
				cout << a + b << endl;
				break;
			case '-':
				cout << a - b << endl;
				break;
			case '*':
				cout << a * b << endl;
				break;
			case '/':
				cout << a / b << endl;
		}
	}
	return 0;
}

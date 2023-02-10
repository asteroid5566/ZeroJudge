// https://zerojudge.tw/ShowProblem?problemid=f004
#include <iostream>
using namespace std;

long long n, flag = 0;

void f(int i)
{
	if (n >= i) {
		if (!flag)
			flag = 1;
		else
			cout << " + ";
		cout << i << "*" << n / i;
		n %= i;
	}	
}

int main()
{
	while (cin >> n) {
		flag = 0;
		cout << n << " = ";
		f(1000);
		f(500);
		f(100);
		f(50);
		f(10);
		f(5);
		f(1);
		cout << "\n";
	}
	return 0;
}

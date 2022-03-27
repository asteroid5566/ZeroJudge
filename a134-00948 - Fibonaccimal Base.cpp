// https://zerojudge.tw/ShowProblem?problemid=a134
#include <iostream>
using namespace std;

int main()
{
	int fib[40] = {0, 1}, i, N, flag, n;
	for (i = 2; i < 40; i++)
		fib[i] = fib[i - 1] + fib[i - 2];

	cin >> N;	
	while (N--) {
		cin >> n;
		flag = 0;
		cout << n << " = ";
		for (i = 39; i > 1; i--) {
			if (n >= fib[i]) {
				n -= fib[i];
				flag = 1;
				cout << 1;
			}
			else if (flag)
				cout << 0;
		}
		cout << " (fib)\n";
	}
	return 0;
}

// https://zerojudge.tw/ShowProblem?problemid=d277
#include <iostream>
using namespace std;

int main()
{
	long long n;
	while (cin >> n)
		n % 2 == 1 ? cout << n - 1 << endl : cout << n << endl;
	return 0;
}


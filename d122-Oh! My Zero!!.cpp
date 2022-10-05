// https://zerojudge.tw/ShowProblem?problemid=d122
#include <iostream>
using namespace std;

long long recursion(long long n)
{
	if (n < 5)
		return 0;
	else {
		n /= 5;
		return n + recursion(n);
	}
}

int main()
{
	long long n;
	
	while (cin >> n)
		cout << recursion(n) << "\n";
	return 0;
}

// https://zerojudge.tw/ShowProblem?problemid=c547
#include <iostream>
using namespace std;

long long arr[10000] = {0};

long long recursion(long long n)
{
	if (arr[n] == 0)
		arr[n] = (recursion(n - 1) + recursion(n - 2)) % 1000000007;
	return arr[n];
}

int main()
{
	arr[0] = arr[1] = 1;
	long long n;
	
	while (cin >> n)
		cout << recursion(n) << "\n";
	
	return 0;
}

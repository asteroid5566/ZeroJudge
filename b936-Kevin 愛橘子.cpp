// https://zerojudge.tw/ShowProblem?problemid=b936
#include <iostream>
using namespace std;

long long n, m;

long long recursion(long long n)
{
	if ((n >> 1) < m)
		return 1;
	
	if (n & 1)
		return recursion((n - 1) >> 1) + recursion((n + 1) >> 1);
	else
		return recursion(n >> 1) << 1;
}

int main()
{
	while (scanf("%lld %lld", &n, &m) == 2) {
		if (n >= m)
			printf("%lld\n", recursion(n));
		else
			printf("0\n");
	}
	return 0;
}

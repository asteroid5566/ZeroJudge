// https://zerojudge.tw/ShowProblem?problemid=c575
#include <iostream>
#include <algorithm>
using namespace std;

int count, n, k, p[50000];

bool test(int range)
{
	int i, curr = 0, count = 0;
	
	for (i = 0; i < n; i++) {
		if (p[i] <= curr)
			continue;
		
		curr = p[i] + range;
		if (++count > k)
			return false;
	}
	return true;
}

int main()
{
	int i, L = 1, R, M;
	cin >> n >> k;
	
	for (i = 0; i < n; i++)
		cin >> p[i];
	sort(p, p + n);
	
	R = p[n - 1] - p[0];
	
	while (L != R) {
		M = (L + R) / 2;
		if (test(M))
			R = M;
		else
			L = M + 1;
	}
	cout << L;
	return 0;
}

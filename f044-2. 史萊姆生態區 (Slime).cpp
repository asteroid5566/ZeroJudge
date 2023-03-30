// https://zerojudge.tw/ShowProblem?problemid=f044
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (!a)
		return b;
	return gcd(b % a, a);
}

int main()
{
	int n, t, d = 0, g, count = 0;
	cin >> n >> t;
	
	g = gcd(n, t);
	n /= g;
	t /= g;
	
	while (count < t) {
		count = count * 2 + n;
		d++;
	}
	
	cout << d << endl;
	return 0;
}

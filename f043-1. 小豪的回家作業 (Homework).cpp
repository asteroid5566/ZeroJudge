// https://zerojudge.tw/ShowProblem?problemid=f043
#include <iostream>
using namespace std;

int main()
{
	long long r, a, b, temp;
	
	cin >> r >> a;
	if (r == a)
		a -= 3;
	
	b = r - a;
	
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	
	cout << a << "+" << b << "=" << r;
	return 0;
}

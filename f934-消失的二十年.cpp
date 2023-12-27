// https://zerojudge.tw/ShowProblem?problemid=f934
#include <iostream>
using namespace std;

int main()
{
	int b, n, max = 0;
	cin >> b;
	while (cin >> n) {
		if (n < b)
			b = n;
		if (n - b > max)
			max = n - b;
	}
	cout << max;
	return 0;
}

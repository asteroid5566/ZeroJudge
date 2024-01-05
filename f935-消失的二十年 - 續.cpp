// https://zerojudge.tw/ShowProblem?problemid=f935
#include <iostream>
using namespace std;

int main()
{
	int curr = 99999999, n, b, s, max = 0;
	
	while (cin >> n) {
		if (n < curr)
			curr = n;
		else if (n - curr > max) {
			max = n - curr;
			b = curr;
			s = n;
		}
	}
	
	if (max > 0)
		cout << max << " " << b << " " << s << "\n";
	else
		cout << "0 -1 -1\n";
	return 0;
}

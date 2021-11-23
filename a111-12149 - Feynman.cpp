// https://zerojudge.tw/ShowProblem?problemid=a111
#include <iostream>
using namespace std;

int main()
{
	int n;
	
	while (cin >> n) {
		if (n == 0)
			break;	
		cout << n * (n + 1) * (2 * n + 1) / 6 << endl;
	}
	return 0;
}

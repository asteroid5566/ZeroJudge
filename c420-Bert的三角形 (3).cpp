// https://zerojudge.tw/ShowProblem?problemid=c420
#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++)
			cout << "_";
		for (j = 1; j < i * 2; j++)
			cout << "*";
		for (j = 1; j <= n - i; j++)
			cout << "_";
		cout << endl;
	}
	return 0;
}

// https://zerojudge.tw/ShowProblem?problemid=d649
#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	
	while (cin >> n && n) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n - i - 1; j++)
				cout << "_";
			
			for (j = 0; j <= i; j++)
				cout << "+";
			cout << endl;
		}
	}
	return 0;
}

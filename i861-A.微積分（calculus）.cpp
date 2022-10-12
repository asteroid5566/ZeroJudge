// https://zerojudge.tw/ShowProblem?problemid=i861
#include <iostream>
using namespace std;

int main()
{
	int n, i, c;
	cin >> n;
	
	for (i = n; i >= 0; i--) {
		cin >> c;
		if (i)
			cout << c * i << " ";
	}
	return 0;
}

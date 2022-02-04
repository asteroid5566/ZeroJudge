// https://zerojudge.tw/ShowProblem?problemid=a229
#include <iostream>
using namespace std;

int n;

void recursion(string str, int left, int right)
{
	if (right == n)
		cout << str << "\n";
	else {
		if (left < n)
			recursion(str + "(", left + 1, right);
		if (left >= right + 1)
			recursion(str + ")", left, right + 1);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while (cin >> n) {
		recursion("(", 1, 0);
		cout << "\n";
	}
	
	return 0;
}

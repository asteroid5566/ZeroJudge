// https://zerojudge.tw/ShowProblem?problemid=e780
#include <iostream>
using namespace std;

int main()
{
	int n, x = 0, t, count = 0;
	string s;
	cin >> n;
	
	while (n--) {
		cin >> s;
		if (s == "L")
			--x;
		else if (s == "R")
			++x;
		else {
			cin >> t;
			if (t == x)
				++count;
		}
	}
	cout << count << endl;
	return 0;
}

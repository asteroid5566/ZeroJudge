// https://zerojudge.tw/ShowProblem?problemid=e908
#include <iostream>
using namespace std;

int main()
{
	int n, m, i;
	string a[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}, s;
	
	while (cin >> s >> n) {
		n %= 7;
		for (i = 0; i < 7; i++) {
			if (s == a[i])
				m = i;
		}
		
		cout << a[(n + m) % 7] << endl;
	}
	return 0;
}

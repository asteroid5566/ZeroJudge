// https://zerojudge.tw/ShowProblem?problemid=c381
#include <iostream>
using namespace std;

int main()
{
	int n, m, i;
	string s, temp, ans;
	while (cin >> n >> m) {
		if (n != 0 || m != 0) {
			s = ans = "";
			while (n--) {
				cin >> temp;
				s += temp;
			}

			while (m--) {
				cin >> i;
				ans += s[i - 1];
			}
			cout << ans << endl;
		}
	}
	return 0;
}

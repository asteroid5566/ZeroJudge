// https://zerojudge.tw/ShowProblem?problemid=a414
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, count;
	while (cin >> n && n) {
		count = 0;
		while (n & 1 == 1) {
			count++;
			n /= 2;
		}
		cout << count << "\n";
	}
	return 0;
}

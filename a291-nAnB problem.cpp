// https://zerojudge.tw/ShowProblem?problemid=a291
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int ans[4], guess[4], temp[4], n, i, j, a, b;

	while(cin >> ans[0] >> ans[1] >> ans[2] >> ans[3] >> n) {
		while (n--) {
			cin >> guess[0] >> guess[1] >> guess[2] >> guess[3];
			a = b = 0;

			for (i = 0; i < 4; i++) {
				temp[i] = ans[i];
				if (temp[i] == guess[i]) {
					a++;
					temp[i] = guess[i] = -1;
				}
			}
			for (i = 0; i < 4; i++) {
				if (temp[i] == -1)
					continue;
				for (j = 0; j < 4; j++) {
					if (guess[j] == -1)
						continue;
					if (temp[i] == guess[j]) {
						b++;
						temp[i] = guess[j] = -1;
					}
				}
			}
			cout << a << "A" << b << "B\n";
		}
	}
	return 0;
}

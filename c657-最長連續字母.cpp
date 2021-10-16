// https://zerojudge.tw/ShowProblem?problemid=c657
#include <iostream>
using namespace std;

int main()
{
	int i, j, count, maxCount;
	char c, maxC;
	string s;

	while (cin >> s) {
		count = maxCount = 1;
		c = maxC = s[0];

		for (i = 1; i < s.size(); i++) {
			if (s[i] == c) {
				count++;
				if (count > maxCount) {
					maxCount = count;
					maxC = c;
				}
			}
			else {
				if (count > maxCount) {
					maxCount = count;
					maxC = c;
				}
				count = 1;
				c = s[i];
			}
		}
		cout << maxC << " " << maxCount << endl;
	}
	return 0;
}

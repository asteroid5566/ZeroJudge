#include <iostream>
using namespace std;

int main()
{
	int i, ans;
	string s;
	while (cin >> s) {
		ans = 0;
		for (i = 0; i < s.size(); i++) {
			if (s[i] == '0' || s[i] == '6' || s[i] == '9')
				ans++;
			else if (s[i] == '8')
				ans += 2;
		}
		cout << ans << endl;
	}
	return 0;
}

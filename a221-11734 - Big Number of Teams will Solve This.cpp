// https://zerojudge.tw/ShowProblem?problemid=a221
#include <iostream>
using namespace std;

int main()
{
	int i, t, j;
	string s1, s2, s3, s4;
	cin >> t;
	cin.ignore();
	for (i = 1; i <= t; i++) {
		getline(cin, s1);
		getline(cin, s2);
		if (s1 == s2)
			cout << "Case " << i << ": Yes\n";
		else {
			s3 = s4 = "";
			for (j = 0; j < s1.size(); j++) {
				if (s1[j] != ' ')
					s3 += s1[j];
			}
			for (j = 0; j < s2.size(); j++) {
				if (s2[j] != ' ')
					s4 += s2[j];
			}

			if (s3 == s4)
				cout << "Case " << i << ": Output Format Error\n";
			else
				cout << "Case " << i << ": Wrong Answer\n";
		}
	}
	return 0;
}

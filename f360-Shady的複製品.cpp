// https://zerojudge.tw/ShowProblem?problemid=f360
#include <iostream>
using namespace std;

int main()
{
	int i, flag;
	string s;
	
	while (cin >> s) {
		i = s.size() - 1;
		while (s[i] == '0') {
			s[i] = '9';
			i--;
		}
		s[i]--;
		
		flag = 0;
		for (i = 0; i < s.size(); i++) {
			if (s[i] != '0')
				flag = 1;
			if (s[i] == '0' && !flag)
				flag = 1;
			else
				cout << s[i];
		}
		cout << "\n"; 
	}
	return 0;
}

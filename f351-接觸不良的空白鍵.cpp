// https://zerojudge.tw/ShowProblem?problemid=f351
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, flag = 0;
	string s;
	getline(cin, s);
	
	for (i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			cout << s[i];
			flag = 0;
		}
		else if (!flag) {
			cout << ' ';
			flag = 1;
		}
	}
	return 0;
}

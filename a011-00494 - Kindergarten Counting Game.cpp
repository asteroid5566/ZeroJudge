// https://zerojudge.tw/ShowProblem?problemid=a011
#include <iostream>
using namespace std;

int main()
{
	int i, flag, count;
	string s;
	
	while (getline(cin, s)) {
		flag = count = 0;
		for (i = 0; i < s.size(); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
				if (!flag) {
					count++;
					flag = 1;
				}
			}
			else
				flag = 0;
		}
		cout << count << endl;
	}
	return 0;
}

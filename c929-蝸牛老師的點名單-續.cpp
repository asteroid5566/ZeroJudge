// https://zerojudge.tw/ShowProblem?problemid=c929
#include <iostream>
using namespace std;

int main()
{
	int i, j, flag;
	string s, list;
	getline(cin, s);
	getline(cin, list);
	
	for (i = 0; i < list.size(); i++) {
		flag = 1;
		for (j = 0; j < s.size(); j++) {
			if (list[i + j] != s[j]) {
				flag = 0;
				break;
			}
		}
		
		if (flag) {
			cout << endl;
			i = i + j - 1;
		}
		else
			cout << list[i];
	}
	return 0;
}

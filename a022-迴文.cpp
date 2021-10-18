// https://zerojudge.tw/ShowProblem?problemid=a022
#include <iostream>
using namespace std;

int main()
{
	string str;
	bool flag;
	
	while (cin >> str) {
		flag = true;
		
		for (int i = 0; i < str.length() / 2; i++) {
			if (str[i] != str[str.length() - 1 - i]) {
				flag = false;
				break;
			}	
		}
		flag ? cout << "yes" << endl : cout << "no" << endl;
	}	
	return 0;
}

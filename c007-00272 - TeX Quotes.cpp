// https://zerojudge.tw/ShowProblem?problemid=c007
#include <iostream>
using namespace std;

int main()
{
	int flag = 1, i;
	string str;
	
	while (getline(cin, str)) {
		for (i = 0; i < str.size(); i++) {
			if (str[i] == '\"') {
				if (flag == 1) {
					cout << "``";
					flag = 2;
				}
				else {
					cout << "\'\'";
					flag = 1;
				}
			}
			else 
				cout << str[i];
		}
		cout << "\n"; 
	}
	return 0;
}

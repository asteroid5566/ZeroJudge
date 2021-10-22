// https://zerojudge.tw/ShowProblem?problemid=a038
#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	bool showZero = false, noneZero = false;
	
	for (int i = str.length() - 1; i >= 0; i--) {
		if (str[i] == '0' && !showZero) {
			if (str[i - 1] != '0')
				showZero = true;
		}
		else if(str[i] != '0' || str[i] == '0' && showZero) {
			cout << str[i];
			noneZero = true;
		}
	}
	if (!noneZero)
		cout << "0";
	return 0;
}

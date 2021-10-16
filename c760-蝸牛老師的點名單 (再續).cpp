// https://zerojudge.tw/ShowProblem?problemid=c760
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int i;
	string str;
	stringstream ss;

	getline(cin, str);
	ss << str;
	
	while (ss >> str) {
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 'a' + 'A';
		cout << str << endl;
	}

	return 0;
}

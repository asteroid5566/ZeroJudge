// https://zerojudge.tw/ShowProblem?problemid=f291
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, width = 0, height = 0;
	string s;
	cin >> s;
	
	for (i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			width = width * 26 + s[i] - 'A' + 1;
		else
			height = height * 10 + s[i] - '0';
	}
	cout << width * height << "\n";
	return 0;
}

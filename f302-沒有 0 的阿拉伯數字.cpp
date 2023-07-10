// https://zerojudge.tw/ShowProblem?problemid=f302
#include <iostream>
using namespace std;

int main()
{
	string s;
	int i, sum = 0;
	cin >> s;
	
	for (i = 0; i < s.size(); i++)
		sum = sum * 9 + s[i] - '0';
		
	cout << sum << endl;
	return 0;
}

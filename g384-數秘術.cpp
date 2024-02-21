// https://zerojudge.tw/ShowProblem?problemid=g384
#include <iostream>
using namespace std;

int main()
{
	string s;
	int i, sum = 0;
	cin >> s;
	
	for (i = 0; i < s.size(); i++)
		sum += s[i] - 'A' + 1;
	cout << sum << endl; 
	return 0;
}

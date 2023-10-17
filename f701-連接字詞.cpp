// https://zerojudge.tw/ShowProblem?problemid=f701
#include <iostream>
using namespace std;

int main()
{
	int i;
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	
	for (i = 0; i < s1.size(); i++) {
		if (s1[i] == ' ')
			cout << " " << s2 << " ";
		else
			cout << s1[i];
	}
	return 0;
}

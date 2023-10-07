// https://zerojudge.tw/ShowProblem?problemid=f700
#include <iostream>
using namespace std;

int main()
{
	int i;
	string s;
	getline(cin, s);
	cout << s << endl;
	for (i = 0; i < s.size(); i++)
		cout << "~";
	return 0;
}

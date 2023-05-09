// https://zerojudge.tw/ShowProblem?problemid=f259
#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	set<string> s;
	
	while (cin >> str) {
		if (s.find(str) != s.end())
			cout << "1\n";
		else {
			cout << "0\n";
			s.insert(str);
		}
	}
	
	return 0;
}

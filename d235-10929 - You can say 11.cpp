// https://zerojudge.tw/ShowProblem?problemid=d235
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, odd, even;
	string s;
	
	while (cin >> s) {
		if (s == "0")
			break;
		odd = even = 0;

		for (i = 0; i < s.size(); i++) {
			if (i % 2)
				odd += s[i] - '0';
			else
				even += s[i] - '0';
		}
		
		if (abs(odd - even) % 11 == 0)
			cout << s << " is a multiple of 11.\n";
		else
			cout << s << " is not a multiple of 11.\n";
	}
	return 0;
}

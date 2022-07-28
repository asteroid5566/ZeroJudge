// https://zerojudge.tw/ShowProblem?problemid=d618
#include <iostream>
using namespace std;

int main()
{
	int i, t, state;
	string s;
	cin >> t;
	
	while (t--) {
		cin >> s;
		state = 1;
		
		for (i = 0; i < s.size(); i++) {
			switch (state) {
				case 2:
					if (s[i] == '1')
						state = 1;
					break;
				case 3:
					if (s[i] == '1')
						state = 1;
					else if (s[i] == '4')
						state = 4;
					break;
				case 4:
					if (s[i] == '1')
						state = 1;
					else if (s[i] == '3')
						state = 3;
					break;
				default:
					state = s[i] - '0';
					break;
			}
		}
		cout << state << endl;
	}
	return 0;
}

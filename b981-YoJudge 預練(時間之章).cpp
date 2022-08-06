// https://zerojudge.tw/ShowProblem?problemid=b981
#include <iostream>
using namespace std;

int main()
{ 
	string s, type;
	int state, current, msec, i;
	
	while (cin >> s) {
		current = state = msec = 0;
		type = "";
		
		for (i = 0; i < s.size(); i++) {
			if (!state && isdigit(s[i]))
				current = current * 10 + s[i] - '0';
			else if (!state && !isdigit(s[i])) {
				state = 1;
				i--;
			}
			else if (state && s[i] == '.') {
				msec += current * 1000 + (s[i + 1] - '0') * 100;
				i += 2;
				state = current = 0;
				type = "";
			}
			else if (state && isdigit(s[i]) || state && i == s.size() - 1) {
				if (i == s.size() - 1)
					type += s[i];
				else
					i--;
				
				if (type == "hour" || type == "h")
					msec += current * 60 * 60 * 1000;
				else if (type == "m" || type == "min")
					msec += current * 60 * 1000;
				else if (type == "s")
					msec += current * 1000;
				else if (type == "ms")
					msec += current;
				state = current = 0;
				type = "";
			}
			else if (state && !isdigit(s[i]))
				type += s[i];
		}
		cout << msec << endl;
	}
	
	return 0;
} 


// https://zerojudge.tw/ShowProblem?problemid=c014
#include <iostream>
using namespace std;

int main()
{
	int i, j, carry, sum, count;
	string s1, s2;
	
	while (cin >> s1 >> s2) {
		if (s1 == "0" && s2 == "0")
			break;

		carry = count = 0;
		for (i = s1.size() - 1, j = s2.size() - 1; i >= 0 || j >= 0; i--, j--) {
			if (i < 0)
				sum = carry + s2[j] - '0';
			else if (j < 0)
				sum = carry + s1[i] - '0';
			else
				sum = carry + s1[i] - '0' + s2[j] - '0';

			if (sum >= 10) {
				carry = 1;
				count++;
			}
			else
				carry = 0;
		}

		if (!count)
			cout << "No carry operation.\n";
		else if (count == 1)
			cout << count << " carry operation.\n";
		else
			cout << count << " carry operations.\n";
	}
	return 0;
}

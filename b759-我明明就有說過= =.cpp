#include <iostream>
using namespace std;

int main()
{
	int i, j;
	string s;
	cin >> s;
	
	for (i = 0; i < s.size(); i++) {
		j = i;
		do {
			cout << s[j];
			if (++j == s.size())
				j = 0;
		} while (j != i);
		cout << endl;
	}
	return 0;
}

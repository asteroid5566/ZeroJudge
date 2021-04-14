#include <iostream>
using namespace std;

int main()
{
	string s;
	
	while (cin >> s) {
		for (int i = 0; i < 6; i++) {
			if (s[i + 1] >= s[i])
				cout << s[i + 1] - s[i];
			else
				cout << s[i] - s[i + 1];
		}
		cout << endl;
	}
	return 0;
}

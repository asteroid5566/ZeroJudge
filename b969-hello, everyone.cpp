#include <iostream>
using namespace std;

int main()
{
	int i;
	string s, greeting;
	getline(cin, s);
	getline(cin, greeting);

	cout << greeting << ", ";
	for (i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			cout << "\n" << greeting << ", ";
		}
		else
			cout << s[i];
	}
	return 0;
}

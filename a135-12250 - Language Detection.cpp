#include <iostream>
using namespace std;

int main()
{
	string s;
	int count = 0;
	while (cin >> s) {
		if (s == "#")
			break;
		count++;

		if (s == "HELLO")
			cout << "Case " << count << ": "<< "ENGLISH" << endl;
		else if (s == "HOLA")
			cout << "Case " << count << ": "<< "SPANISH" << endl;
		else if (s == "HALLO")
			cout << "Case " << count << ": "<< "GERMAN" << endl;
		else if (s == "BONJOUR")
			cout << "Case " << count << ": "<< "FRENCH" << endl;
		else if (s == "CIAO")
			cout << "Case " << count << ": "<< "ITALIAN" << endl;
		else if (s == "ZDRAVSTVUJTE")
			cout << "Case " << count << ": "<< "RUSSIAN" << endl;
		else
			cout << "Case " << count << ": "<< "UNKNOWN" << endl;
	}
	return 0;
}

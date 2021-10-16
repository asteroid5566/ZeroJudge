#include <iostream>
using namespace std;

int main()
{
	int n, count = 0, kill = 0, die = 0, assist = 0;
	string s;
	cin >> n;

	while (n--) {
		cin >> s;
		
		if (s == "Get_Kill") {
			kill++;
			if (++count < 3)
				cout << "You have slain an enemie." << endl;
			else if (count == 3)
				cout << "KILLING SPREE!" << endl;
			else if (count == 4)
				cout << "RAMPAGE~" << endl;
			else if (count == 5)
				cout << "UNSTOPPABLE!" << endl;
			else if (count == 6)
				cout << "DOMINATING!" << endl;
			else if (count == 7)
				cout << "GUALIKE!" << endl;
			else if (count >= 8)
				cout << "LEGENDARY!" << endl;
		}
		else if (s == "Get_Assist")
			assist++;
		else if (s == "Die") {
			die++;
			if (count < 3) {
				cout << "You have been slained." << endl;
				count = 0;
			}
			else {
				cout << "SHUTDOWN." << endl;
				count = 0;
			}
		}
	}
	cout << kill << "/" << die << "/" << assist << endl;
	return 0;
}

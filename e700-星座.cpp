// https://zerojudge.tw/ShowProblem?problemid=e700
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int m, d;
	char c;
	stringstream ss;
	string s;
	
	while (cin >> s) {
		ss.clear();
		ss.str("");
		ss << s;
		ss >> m >> c >> d;
		
		if (m == 1 && d >= 21 || m == 2 && d <= 19)
			cout << "¤ô²~®y\n";
		else if (m == 2 && d >= 20 || m == 3 && d <= 20)
			cout << "Âù³½®y\n";
		else if (m == 3 && d >= 21 || m == 4 && d <= 20)
			cout << "¨d¦Ï®y\n";
		else if (m == 4 && d >= 21 || m == 5 && d <= 21)
			cout << "ª÷¤û®y\n";
		else if (m == 5 && d >= 22 || m == 6 && d <= 21)
			cout << "Âù¤l®y\n";
		else if (m == 6 && d >= 22 || m == 7 && d <= 22)
			cout << "¥¨ÃÉ®y\n";
		else if (m == 7 && d >= 23 || m == 8 && d <= 21)
			cout << "·à¤l®y\n";
		else if (m == 8 && d >= 22 || m == 9 && d <= 23)
			cout << "³B¤k®y\n";
		else if (m == 9 && d >= 24 || m == 10 && d <= 23)
			cout << "¤Ñ¯¯®y\n";
		else if (m == 10 && d >= 24 || m == 11 && d <= 22)
			cout << "¤ÑÃÈ®y\n";
		else if (m == 11 && d >= 23 || m == 12 && d <= 22)
			cout << "®g¤â®y\n";
		else if (m == 12 && d >= 23 || m == 1 && d <= 20)
			cout << "¼¯½~®y\n";
	}
	return 0;
}

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
			cout << "���~�y\n";
		else if (m == 2 && d >= 20 || m == 3 && d <= 20)
			cout << "�����y\n";
		else if (m == 3 && d >= 21 || m == 4 && d <= 20)
			cout << "�d�Ϯy\n";
		else if (m == 4 && d >= 21 || m == 5 && d <= 21)
			cout << "�����y\n";
		else if (m == 5 && d >= 22 || m == 6 && d <= 21)
			cout << "���l�y\n";
		else if (m == 6 && d >= 22 || m == 7 && d <= 22)
			cout << "���ɮy\n";
		else if (m == 7 && d >= 23 || m == 8 && d <= 21)
			cout << "��l�y\n";
		else if (m == 8 && d >= 22 || m == 9 && d <= 23)
			cout << "�B�k�y\n";
		else if (m == 9 && d >= 24 || m == 10 && d <= 23)
			cout << "�ѯ��y\n";
		else if (m == 10 && d >= 24 || m == 11 && d <= 22)
			cout << "���Ȯy\n";
		else if (m == 11 && d >= 23 || m == 12 && d <= 22)
			cout << "�g��y\n";
		else if (m == 12 && d >= 23 || m == 1 && d <= 20)
			cout << "���~�y\n";
	}
	return 0;
}

// https://zerojudge.tw/ShowProblem?problemid=c638
#include <iostream>
using namespace std;

int main()
{
	int year;
	string arr[10] = {"��", "��", "��", "��", "��", "�A", "��", "�B", "��", "�v"},
		arr2[12] = {"��", "��", "��", "��", "�l", "��", "�G", "�f", "��", "�x", "��", "��"};

	while (cin >> year)
		cout << arr[(year - 1800) % 10] << arr2[(year - 1800) % 12] << endl;

	return 0;
}

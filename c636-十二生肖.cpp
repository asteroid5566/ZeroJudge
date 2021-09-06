// https://zerojudge.tw/ShowProblem?problemid=c636
#include <iostream>
using namespace std;

int main()
{
	int n;
	string arr[12] = {"��", "��", "��", "��", "��", "�s", "�D", "��", "��", "�U", "��", "��"},
		arr2[12] = {"��", "��", "��", "��", "�U", "��", "��", "�D", "�s", "��", "��", "��"};
	while (cin >> n) {
		if (n >= 1) {
			cout << arr[n % 12] << endl;
		}
		else {
			n = -n;
			cout << arr2[n % 12] << endl;
		}
	}
	return 0;
}

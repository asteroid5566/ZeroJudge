// https://zerojudge.tw/ShowProblem?problemid=c638
#include <iostream>
using namespace std;

int main()
{
	int year;
	string arr[10] = {"©°", "¨¯", "¤Ð", "¬Ñ", "¥Ò", "¤A", "¤þ", "¤B", "¥³", "¤v"},
		arr2[12] = {"¥Ó", "¨»", "¦¦", "¥è", "¤l", "¤¡", "±G", "¥f", "¨°", "¤x", "¤È", "¥¼"};

	while (cin >> year)
		cout << arr[(year - 1800) % 10] << arr2[(year - 1800) % 12] << endl;

	return 0;
}

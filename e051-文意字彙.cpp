// https://zerojudge.tw/ShowProblem?problemid=e051
#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;

	cout << str[0];
	for (int i = 1; i < str.size() - 1; i++)
		cout << "_";
	cout << str[str.size() - 1] << endl;
	
	return 0;
}

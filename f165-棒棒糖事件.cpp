// https://zerojudge.tw/ShowProblem?problemid=f165
#include <iostream>
using namespace std;

int main()
{
	int n, p;
	cin >> n >> p;
	
	if (!p || n % p == 0)
		cout << "OK!" << endl;
	else
		cout << n % p << endl;
	return 0;
}

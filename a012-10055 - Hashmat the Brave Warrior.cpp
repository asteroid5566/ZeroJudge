// https://zerojudge.tw/ShowProblem?problemid=a012
#include <iostream>
using namespace std;

int main()
{
	long long n1, n2;
	
	while (cin >> n1 >> n2)
		n1 > n2 ? cout << n1 - n2 << endl : cout << n2 - n1 << endl;

	return 0;
}

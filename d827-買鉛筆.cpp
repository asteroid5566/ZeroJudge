// https://zerojudge.tw/ShowProblem?problemid=d827
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	cout << (n / 12) * 50 + (n % 12) * 5 << endl;
	return 0;
}

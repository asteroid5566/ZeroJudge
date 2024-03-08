// https://zerojudge.tw/ShowProblem?problemid=g489
// not a good question
#include <iostream>
using namespace std;

int main()
{
	int m, n, i, tmp;
	cin >> m >> n;
	
	for (i = 0; i < m + n; i++)
		cin >> tmp;
	cout << m - n << endl;
	return 0;
}

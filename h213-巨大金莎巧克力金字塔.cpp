// https://zerojudge.tw/ShowProblem?problemid=h213
#include <iostream>
using namespace std;

int main()
{
	int i, sum;
	for (i = 1; i <= 1023; i++)
		sum += i * i;
	cout << sum << endl;
	return 0;
}

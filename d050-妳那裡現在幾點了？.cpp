// https://zerojudge.tw/ShowProblem?problemid=d050
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	t -= 15;
	if (t < 0)
		t += 24;
		
	cout << t << endl;
	return 0;
}

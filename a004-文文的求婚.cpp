// https://zerojudge.tw/ShowProblem?problemid=a004
#include <iostream>
using namespace std;

int main()
{
	int t;
	while(cin >> t) {
		if(t % 4 == 0 && (t % 100 != 0 || t % 400 == 0)) {
			cout << "¶|¦~" << endl;
		}
		else
			cout << "¥­¦~" << endl;
	}
	return 0;
}

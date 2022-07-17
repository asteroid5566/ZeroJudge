// https://zerojudge.tw/ShowProblem?problemid=f709
#include <iostream>
using namespace std;

int main()
{
	string ans[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	int add[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30}, i, m, d, sum;
	cin >> i;
	
	while (cin >> m >> d) {
		sum = 0;
		for (i = 1; i < m; i++)
			sum += add[i - 1];
		
		cout << ans[(sum + d + 5) % 7] << endl;
	}
	
	return 0;
}

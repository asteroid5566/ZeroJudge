// https://zerojudge.tw/ShowProblem?problemid=d881
#include <iostream>
using namespace std;

int main()
{
	int d, gap, i, n, sum;
	
	while (cin >> d) {
		sum = n = gap = 1;
		
		for (i = 0; i < 49; i++) {
			n += gap;
			gap += d;
			sum += n;
		}
		cout << sum << endl;
	}
	return 0;
}

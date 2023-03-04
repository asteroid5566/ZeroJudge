// https://zerojudge.tw/ShowProblem?problemid=e929
#include <iostream>
using namespace std;

int main()
{
	int n, flag = 0, count, i;
	cin >> n;
	cout << n << " = ";
	
	for (i = 2; i <= n; i++) {
		count = 0;
		while (n % i == 0) {
			n /= i;
			count++;
		}
		
		if (count > 0) {
			if (!flag)
				flag = 1;
			else
				cout << " * ";
			
			if (count == 1)
				cout << i;
			else
				cout << i << "^" << count;
		}
	}
	return 0;
}

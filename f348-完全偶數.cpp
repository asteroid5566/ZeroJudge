// https://zerojudge.tw/ShowProblem?problemid=f348
#include <iostream>
using namespace std;

int test(int n)
{
	while (n > 0) {
		if (n % 10 % 2 != 0)
			return 0;
		n /= 10;
	}
	return 1;
}

int main()
{
	int n, i, j;
	cin >> n;
	
	if (test(n))
		cout << 0 << endl;
	else {
		i = j = n;
		
		while (1) {
			i++;
			j--;
			if (test(i)) {
				cout << i - n << endl;
				break;
			}
			if (test(j)) {
				cout << n - j << endl;
				break;
			}
		}
	}
	return 0;
}

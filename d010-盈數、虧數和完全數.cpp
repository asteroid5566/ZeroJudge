// https://zerojudge.tw/ShowProblem?problemid=d010
#include <iostream>
using namespace std;

int main()
{
	int n, i, sum;

	while (cin >> n) {
		sum = 0;
		for (i = 1; i < n; i++) {
			if (n % i == 0)
				sum += i;
		}

		if (sum > n)
			cout << "盈數" << endl;
		else if (sum < n)
			cout << "虧數" << endl;
		else if (sum == n)
			cout << "完全數" << endl;
	}
	return 0;
}

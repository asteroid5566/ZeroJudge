// https://zerojudge.tw/ShowProblem?problemid=c813
#include <iostream>
using namespace std;

int main()
{
	int n, sum;
	
	while (cin >> n && n != 0) {
		while (n / 10 > 0) {
			sum = 0;
			while (n > 0) {
				sum += n % 10;
				n /= 10;
			}
			n = sum;
		}
		cout << n << "\n";
	}
	return 0;
}

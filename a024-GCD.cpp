// https://zerojudge.tw/ShowProblem?problemid=a024
#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	
	while (1) {
		if (n1 == 0) {
			cout << n2;
			break;
		}
		else if (n2 == 0) {
			cout << n1;
			break;
		}
		else if (n1 > n2)
			n1 %= n2;
		else
			n2 %= n1;
	}
	return 0;
}

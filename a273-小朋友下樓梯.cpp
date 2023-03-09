// https://zerojudge.tw/ShowProblem?problemid=a273
#include <iostream>
using namespace std;

int main()
{
	int n, k;
	
	while (cin >> n >> k) {
		if (n == 0 && k == 0)
			cout << "Ok!\n";
		else if (k == 0)
			cout << "Impossib1e!\n";
		else if (n % k == 0)
			cout << "Ok!\n";
		else
			cout << "Impossib1e!\n";
	}
	return 0;
}

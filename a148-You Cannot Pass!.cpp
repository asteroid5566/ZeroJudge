#include <iostream>
using namespace std;

int main()
{
	int n, sum, i, temp;
	while (cin >> n) {
		sum = 0;
		for (i = 0; i < n; i++) {
			cin >> temp;
			sum += temp;
		}
		if (sum > 59 * n)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
	return 0;
}

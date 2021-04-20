#include <iostream>
using namespace std;

int main()
{
	int n, m, count, sum;

	while (cin >> n >> m) {
		count = 1;
		sum = n;
		while (sum <= m) {
			sum += ++n;
			count++;
		}
		cout << count << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int x, i, j, sum;
	
	while (cin >> x) {
		if (x == 1) {
			cout << 1 << endl;
			continue;
		}
		
		sum = 0;
		
		for (i = 2; i <= x; i++) {
			j = 2;
			while (i % j++);

			if (j == i + 1) {
				while (x % i == 0) {
					x /= i;
					sum += i;
				}
			}
			
			if (i * i > x && sum == 0) {
				cout << x << endl;
				break;
			}
		}
		
		if (sum)
			cout << sum << endl;
	}
	return 0;
}

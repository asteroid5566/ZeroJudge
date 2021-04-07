#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T, S = 1, i, a, b, sum;
	cin >> T;
	
	while (T--) {
		cin >> a >> b;
		sum = 0;
		for (i = sqrt(a) - 1; i <= sqrt(b) + 1; i++) {
			if (i * i >= a && i * i <= b)
				sum += i * i;
		}
		cout << "Case " << S++ << ": " << sum << endl;
	}
	return 0;
}

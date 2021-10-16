#include <iostream>
using namespace std;

int main()
{
	int n, p1, p2, i, j, max = 0;
	cin >> n;
	int x[n], y[n];
	
	cin >> x[0] >> y[0];
	for (i = 1; i < n; i++) {
		cin >> x[i] >> y[i];
		for (j = 0; j < i; j++) {
			if ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) > max) {
				max = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
				p1 = j;
				p2 = i;
			}
		}
	}
	cout << p1 << " " << p2 << endl;
	return 0;
}

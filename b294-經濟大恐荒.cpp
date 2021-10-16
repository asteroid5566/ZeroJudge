#include <iostream>
using namespace std;

int main()
{
	int price = 1, n, i, sum = 0, temp;
	cin >> n;
	
	for (i = 0; i < n; i++) {
		cin >> temp;
		sum += temp * price++;
	}
	cout << sum << endl;
	return 0;
}

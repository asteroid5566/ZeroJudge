#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, i, j;
	char c;
	cin >> n;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> c;
			if (i == j)
				cout << c;
		}
	}
	return 0;
}

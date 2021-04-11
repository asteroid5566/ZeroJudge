#include <iostream>
using namespace std;

int main()
{
	int i, n;
	
	while (cin >> n) {
		if (n == 0)
			break;
		for (i = 1; i < n; i++) {
			if (i % 7 != 0)
				cout << i << " ";
		}
		cout << endl;
	}
	
	return 0;
}

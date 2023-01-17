#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int i, n, l1, l2, l3;
	cin >> n >> l1 >> l2 >> l3;
	
	for (i = n; i > 0; i--) {
		if (i != l1 && i != l2 && i != l3)
			cout << "No. " << i << endl;
	}
	return 0;
}

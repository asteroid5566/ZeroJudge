#include <iostream>
using namespace std;

int main()
{
	int n, temp, t1, t2, t3;
	cin >> n;
	while (n--) {
		cin >> temp >> t1;
		t1 += 60 * temp;
		cin >> temp >> t2 >> t3;
		t2 += 60 * temp;
		if (t1 + t3 <= t2)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}

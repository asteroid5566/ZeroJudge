#include <iostream>
using namespace std;

int main()
{
	int n, x, y, t;
	cin >> n;
	
	while (n--) {
		cin >> x >> y;
		t = 100 - x - y;
		if (t > 0 && t <= 30)
			cout << "sad!" << endl;
		else if (t > 30 && t <= 60)
			cout << "hmm~~" << endl;
		else if (t > 60 && t < 100)
			cout << "Happyyummy" << endl;
		else
			cout << "evil!!" << endl;
	}
	return 0;
}

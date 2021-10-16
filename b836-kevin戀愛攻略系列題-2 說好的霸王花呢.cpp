#include <iostream>
using namespace std;

int main()
{
	long n, m, i, s;
	
	while (cin >> n >> m) {
		if (m == 0) {
			cout << "Go Kevin!!" << endl;
			continue;
		}
		
		i = -1;
		while (1) {
			s = (++i * (2 * 1 + (i - 1) * m)) / 2;

			if (s == n) {
				cout << "Go Kevin!!" << endl;
				break;
			}
			else if (s > n) {
				cout << "No Stop!!" << endl;
				break;
			}
		}
	}
	return 0;
}

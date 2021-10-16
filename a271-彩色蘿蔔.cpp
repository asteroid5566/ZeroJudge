// https://zerojudge.tw/ShowProblem?problemid=a271
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	int N, x, y, z, w, n, m, i, poison;
	cin >> N;
	while (N--) {
		poison = 0;
		cin >> x >> y >> z >> w >> n >> m;
		cin.ignore();
		getline(cin, str);
		
		for (i = 0; i < str.size(); i++) {
			if (str[i] >= '0' && str[i] <= '4') {
				m -= poison;
				if (m <= 0) {
					cout << "bye~Rabbit\n";
					break;
				}

				switch (str[i]) {
					case '1':
						m += x;
						break;
					case '2':
						m += y;
						break;
					case '3':
						m -= z;
						break;
					case '4':
						m -= w;
						poison += n;
				}
				
				if (m <= 0) {
					cout << "bye~Rabbit\n";
					break;
				}
			}
		}
		
		if (m > 0)
			cout << m << "g\n";
	}
	return 0;
}

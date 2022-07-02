// https://zerojudge.tw/ShowProblem?problemid=a741
#include <iostream>
using namespace std;

int main()
{
	int m = 1, idx;
	long long n;
	string temp;
	
	while (cin >> n) {
		if (n == 0) {
			cout << m << ". 0\n";
			m++;
			continue;
		}
		
		idx = 0;
		string s = "";
		while (n > 0) {
			if (idx == 0) {                 // 0-99
				if (n % 100 != 0)
					s.insert(0, to_string(n % 100));
				n /= 100;
				idx++;
			}
			else if (idx == 1) {            // shata 100
				if (n % 10 != 0)
					s.insert(0, to_string(n % 10) + " shata ");
				n /= 10;
				idx++;
			}
			else if (idx == 2) {            // hajar 1000
				if (n % 100 != 0)
					s.insert(0, to_string(n % 100) + " hajar ");
				n /= 100;
				idx++;
			}
			else if (idx == 3) {            // lakh 100000
				if (n % 100 != 0)
					s.insert(0, to_string(n % 100) + " lakh ");
				n /= 100;
				idx++;
			}
			else if (idx == 4) {            // kuti 10000000
				if (n % 100 != 0)
					s.insert(0, to_string(n % 100) + " kuti ");
				else if (n / 100 != 0)
					s.insert(0, "kuti ");
				n /= 100;
				idx = 1;
			}
		}
		cout << m << ". " << s << endl;
		m++;
	}
	return 0;
}

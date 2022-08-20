// https://zerojudge.tw/ShowProblem?problemid=b882
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	long long h, m, s;
	cin >> h >> m >> s;
	
	while (s >= 60) {
		s -= 60;
		m++;
	}
	
	while (m >= 60) {
		m -= 60;
		h++;
	}
	
	while (h >= 24)
		h -= 24;
	
	cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << s << endl;
	return 0;
}

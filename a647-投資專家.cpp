// https://zerojudge.tw/ShowProblem?problemid=a647
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	int n;
	double m, p, rate;
	cin >> n;
	
	while (n--) {
		cin >> m >> p;
		rate = (p - m) / m * 10000; 
		if (rate >= 0)
			rate += 0.0000001;
		else
			rate -= 0.0000001;
		rate /= 100;
		if (rate == -0.00)
			rate = 0;
		cout << fixed << setprecision(2) << rate << "% ";
		if (rate >= 10.00 || rate <= -7.00)
			cout << "dispose\n";
		else
			cout << "keep\n";
	}
	
	return 0;
}

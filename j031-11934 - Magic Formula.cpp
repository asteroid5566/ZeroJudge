// https://zerojudge.tw/ShowProblem?problemid=j031
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, l, i, count;
	
	while (cin >> a >> b >> c >> d >> l) {
		if (!a && !b && !c && !d && !l)
			break;
		count = 0;
		
		for (i = 0; i <= l; i++) {
			if ((a * i * i + b * i + c) % d == 0)
				count++;
		}
		cout << count << "\n";
	}
	return 0;
}

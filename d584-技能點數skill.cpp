// https://zerojudge.tw/ShowProblem?problemid=d584
#include <iostream>
using namespace std;

int main()
{
	int i, career, level, point;
	while (cin >> career >> level) {
		point = 0;
		if (career) {
			for (i = 8; i <= level; i++) {
				if (i == 30 || i == 70)
					point++;
				else if (i == 120)
					point += 3;
				
				if (career == 2) {
					if (i == 8)
						point++;
					else if (i > 8)
						point += 3;
				}
				else {
					if (i == 10)
						point++;
					else if (i > 10)
						point += 3;
				}
			}	
		}
		cout << point << endl;
	}
	return 0;
}

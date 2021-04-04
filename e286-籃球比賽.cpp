#include <iostream>
using namespace std;

int main()
{
	int i, j, p1, p2, w1 = 0, temp;
	
	for (i = 0; i < 2; i++) {
		p1 = 0;
		p2 = 0;
		
		for (j = 0; j < 4; j++) {
			cin >> temp;
			p1 += temp;
		}
		
		for (j = 0; j < 4; j++) {
			cin >> temp;
			p2 += temp;
		}
		
		if (p1 > p2)
			w1++;
		
		cout << p1 << ":" << p2 << endl;
	}
	
	if (w1 == 2)
		cout << "Win" << endl;
	else if (w1 == 1)
		cout << "Tie" << endl;
	else
		cout << "Lose" << endl;
	return 0;
}

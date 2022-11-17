// https://zerojudge.tw/ShowProblem?problemid=f281
#include<iostream>
using namespace std;
int main()
{
	int min1 = 999999, min2 = 999999, n, l, c, temp;
	cin >> c;
	
	while (c--) {
		cin >> temp;
		if (temp < min1) {
			min2 = min1;
			min1 = temp;
		}
		else if (temp < min2)
			min2 = temp;
	}
	
	cin >> l;
	n = l - min1;
	if (min2 - n < l)
		cout << "You are too black!\n";
	else
		cout << n << "\n";
	
	return 0;
}

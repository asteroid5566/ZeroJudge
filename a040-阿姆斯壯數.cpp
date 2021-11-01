// https://zerojudge.tw/ShowProblem?problemid=a040
#include <iostream>
using namespace std;

int main()
{
	int n, m, i, current, temp, digit, sum, exist = 0;
	cin >> n >> m;
	
	for (i = n; i <= m; i++) {
		current = i;
		digit = 0;
		sum = 0;
		
		while (current > 0) {
			current /= 10;
			digit++;
		}
		
		current = i;
		for (int j = 0; j < digit; j++) {
			temp = 1;
			for (int k = 0; k < digit; k++)
				temp *= current % 10;
			sum += temp;
			current /= 10;
		}
		
		if (sum == i) {
			exist = 1;
			cout << sum << " ";
		}
	}
	
	if (!exist)
		cout << "none";
	
	return 0;
}

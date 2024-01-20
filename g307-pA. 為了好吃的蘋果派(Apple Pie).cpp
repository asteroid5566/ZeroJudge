// https://zerojudge.tw/ShowProblem?problemid=g307
#include <iostream>
using namespace std;

int main()
{
	int i, j, n, k, t, max, min, sum, temp, flag = 0;
	cin >> n >> k >> t;
	
	for (i = 0; i < n; i++) {
		max = -1;
		min = 9999;
		sum = 0;
		
		for (j = 0; j < k; j++) {
			cin >> temp;
			if (temp > max)
				max = temp;
			if (temp < min)
				min = temp;
			sum += temp;
		}
		
		sum = sum - max - min;
		
		if (sum / (k - 2) >= t) {
			cout << i << endl;
			flag = 1;
		}
	}
	
	if (!flag)
		cout << "A is for apple.\n";
	
	return 0;
}

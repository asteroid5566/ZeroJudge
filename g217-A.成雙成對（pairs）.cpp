// https://zerojudge.tw/ShowProblem?problemid=g217
#include <iostream>
using namespace std;

int main()
{
	int i, t, n, pos[50001], neg[50001], max, temp;
	cin >> t;
	
	while (t--) {
		cin >> n;
		max = -1;
		
		for (i = 0; i < 50001; i++)
			pos[i] = neg[i] = 0;
			
		for (i = 0; i < n; i++) {
			cin >> temp;
			
			if (temp >= 0) {
				if (++pos[temp] > max)
					max = pos[temp];
			}
			else {
				if (++neg[-temp] > max)
					max = neg[-temp];
			}			
		}
		
		if (max <= n / 2)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}

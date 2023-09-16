// https://zerojudge.tw/ShowProblem?problemid=f586
#include <iostream>
using namespace std;

int arr[1000001];

int main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, n, cnt, i, j, flag;
	
	arr[0] = arr[1] = 1;
	for (i = 2; i < 1000001; i++) {
		if (arr[i] == 0) { 
			for (j = i + i; j < 1000001; j += i)
				arr[j] = 1;
 		}
	}
	
	cin >> t;
	
	while (t--) {
		cin >> n;
		
		if (n == 1)
			cout << "1\n";
		else {
			cnt = 0;
			
			for (i = 2; i <= n && cnt >= 0; i++) {
				if (arr[i] != 0 || n % i)
					continue;
				
				flag = 0;
				
				while (n % i == 0) {
					if (!flag)
						flag = 1;
					else {
						cnt = -1;
						break;
					}
					n /= i;
					cnt++;
				}
			}
			
			if (cnt > 0) {
				if (cnt & 1)
					cout << "-1\n";
				else
					cout << "1\n";
			}
			else
				cout << "0\n";
		}
	}
	return 0;
}

// https://zerojudge.tw/ShowProblem?problemid=g256
#include <iostream>
using namespace std;

long long arr[1000001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n, temp, count;
	
	while (cin >> n) {
		if (n == 1) {
			cout << "0\n";
			continue;
		}
		
		if (arr[n])
			count = arr[n];
		else {
			temp = n;
			count = 0;
			
			while (temp > 1) {
				if (temp <= 1000000 && arr[temp]) {
					count += arr[temp];
					break;
				}
				if (temp & 1)
					temp = temp * 3 + 1;
				else
					temp >>= 1;
				count++;
			}
			
			arr[n] = count;
		}
		cout << count << "\n";
	}
	return 0;
}

// https://zerojudge.tw/ShowProblem?problemid=a159
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[4], i, sum1, sum2;
	cin >> i;
	
	while (cin >> arr[0] >> arr[1] >> arr[2] >> arr[3]) {
		sum1 = sum2 = 0;
		for (i = 0; i < 4; i++) {
			sum1 += arr[i] % 10;
			arr[i] /= 10;
			
			if (2 * (arr[i] % 10) < 10)
				sum2 += 2 * (arr[i] % 10);
			else
				sum2 += (2 * (arr[i] % 10)) % 10 + (2 * (arr[i] % 10)) / 10;
			arr[i] /= 10;
			
			sum1 += arr[i] % 10;
			arr[i] /= 10;
			
			if (2 * (arr[i] % 10) < 10)
				sum2 += 2 * (arr[i] % 10);
			else
				sum2 += (2 * (arr[i] % 10)) % 10 + (2 * (arr[i] % 10)) / 10;
		}
		
		if ((sum1 + sum2) % 10 == 0)
			cout << "Valid\n";
		else
			cout << "Invalid\n";
	}
	return 0;
}

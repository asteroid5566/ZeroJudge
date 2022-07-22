// https://zerojudge.tw/ShowProblem?problemid=f605
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, d, count = 0, arr[3], sum = 0;
	cin >> n >> d;
	
	while (cin >> arr[0] >> arr[1] >> arr[2]) {
		sort(arr, arr + 3);
		if (arr[2] - arr[0] >= d) {
			sum += (arr[0] + arr[1] + arr[2]) / 3;
			count++;
		}
	}
	cout << count << " " << sum << endl;
	return 0;
}

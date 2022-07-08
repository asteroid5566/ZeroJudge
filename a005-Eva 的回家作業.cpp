// https://zerojudge.tw/ShowProblem?problemid=a005
#include <iostream>
using namespace std;

int main()
{
	int arr[5], n, i;
	cin >> n;
	
	for (i = 0; i < n; i++) {
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		
		if (arr[1] - arr[0] == arr[2] - arr[1])
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[3] + arr[3] - arr[2] << endl;
		else if (arr[1] / arr[0] == arr[3] / arr[2])
			cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[3] * arr[3] / arr[2] << endl;
	}
	return 0;
}

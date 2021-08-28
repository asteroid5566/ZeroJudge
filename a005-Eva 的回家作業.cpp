#include <iostream>
using namespace std;

int main()
{
	int n, i;
	cin >> n;
	int arr[n][5];
	for (i = 0; i < n; i++)
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
	
	for (i = 0; i < n; i++) {
		if (arr[i][1] - arr[i][0] == arr[i][2] - arr[i][1]) {
			cout << arr[i][0] << " " << arr[i][1] << " " << arr[i][2] << " " << arr[i][3] << " " << arr[i][3] + arr[i][3] - arr[i][2] << endl;
		}
		else if (arr[i][1] / arr[i][0] == arr[i][3] / arr[i][2]) {
			cout << arr[i][0] << " " << arr[i][1] << " " << arr[i][2] << " " << arr[i][3] << " " << arr[i][3] * arr[i][3] / arr[i][2] << endl;
		}
	}
	return 0;
}

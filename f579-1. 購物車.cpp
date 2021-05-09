#include <iostream>
using namespace std;

int main()
{
	int a, b, n, i, j, temp, count = 0;
	cin >> a >> b >> n;
	int arr[n][101] = {0};
	
	for (i = 0; i < n; i++) {
		while (cin >> temp) {
			if (!temp)
				break;
			if (temp > 0) {
				arr[i][temp]++;
			}
			else {
				temp *= -1;
				arr[i][temp]--;
			}
		}
		if (arr[i][a] > 0 && arr[i][b] > 0)
			count++;
	}
	cout << count << endl;
	return 0;
}

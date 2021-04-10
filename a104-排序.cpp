#include <iostream>
using namespace std;

int main()
{
	int arr[1000], n, i, j, temp;
	while (cin >> n) {
		for (i = 0; i < n; i++)
			cin >> arr[i];
		
		for (i = n - 2; i > 0; i--) {
			for (j = 0; j <= i; j++) {
				if (arr[j] > arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		
		cout << arr[0];
		for (i = 1; i < n; i++)
			cout << " " << arr[i];
		cout << endl;
	}
	return 0;
}

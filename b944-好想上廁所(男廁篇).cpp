#include <iostream>
using namespace std;

int main()
{
	int n, m, a, b, i;
	cin >> n;
	int arr[n] = {0}, time[n] = {0};
	
	while (cin >> a >> b) {
		for (i = 0; i < n; i++) {
			if (time[i] > 0)
				time[i]--;
			if (time[i] == 0 && arr[i] != 0)
				arr[i] = 0;
		}
		
		for (i = 0; i < n; i++) {
			if (i == 0 && time[i] == 0 && arr[i + 1] == 0 ||
				i == n - 1 && time[i] == 0 && arr[i - 1] == 0 ||
				time[i] == 0 && arr[i - 1] == 0 && arr[i + 1] == 0) {
				arr[i] = a;
				time[i] = b;
				goto esc;
			}
		}
		for (i = 0; i < n; i++) {
			if (time[i] == 0) {
				arr[i] = a;
				time[i] = b;
				goto esc;
			}
		}
		cout << "  Not enough" << endl;
		
		esc:
   		cout << "Number:";
   		for (i = 0; i < n; i++)
   			cout << " " << arr[i];
		cout << "\n  Time:";
		for (i = 0; i < n; i++)
			cout << " " << time[i];
		cout << endl;
	}
	return 0;
}

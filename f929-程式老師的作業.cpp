// https://zerojudge.tw/ShowProblem?problemid=f929
#include <iostream>
using namespace std;

int main()
{
	int n, i, op, temp, count;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
		cin >> arr[i];
	
	cin >> count;
	while (count--) {
		cin >> op;
		if (op == 1) {
			cin >> temp;
			for (i = 0; i < n; i++) {
				if (arr[i] == 0) {
					arr[i] = temp;
					break;
				}
			}
		}
		else if (op == 2) {
			cin >> temp;
			arr[temp] = 0;
		}
		else {
			temp = 0;
			for (i = 0; i < n; i++) {
				if (arr[i] == 0) {
					temp = 1;
					cout << i << "\n";
					break;
				}
			}
			if (!temp)
				cout << -1 << "\n";
		}
	}
	return 0;
}

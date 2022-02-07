// https://zerojudge.tw/ShowProblem?problemid=a524
#include <iostream>
using namespace std;

int n;

void recursion(int arr[], int idx)
{
	if (idx < n) {
		for (int i = n; i > 0; i--) {
			int flag = 0;
			for (int j = 0; j < idx; j++) {
				if (arr[j] == i) {
					flag = 1;
					break;
				}
			}
			if (!flag) {
				arr[idx] = i;
				recursion(arr, idx + 1);
			}
		}
	}
	else {
		for (int i = 0; i < n; i++)
			cout << arr[i];
		cout << endl;
	}
}

int main()
{
	while (cin >> n) {
		int arr[n];
		for (int i = 0; i < n; i++)
			arr[i] = 0;
		recursion(arr, 0);
	}
	return 0;
}

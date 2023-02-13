// https://zerojudge.tw/ShowProblem?problemid=e998
#include <iostream>
using namespace std;

int main()
{
	int n, i, j, flag;
	
	while (cin >> n) {
		int arr[n];
		i = flag = 1;
		
		while (i <= n * n) {
			if (flag == 1) {
				for (j = 0; j < n; j++)
					arr[j] = i++;
				flag = 0;
			}
			else {
				for (j = n - 1; j >= 0; j--)
					arr[j] = i++;
				flag = 1;
			}
			
			cout << arr[0];
			for (j = 1; j < n; j++) {
				if (arr[j] > n * n)
					break;
				cout << " " << arr[j];
			}
			cout << "\n\n";
		}
	}
	return 0;
}

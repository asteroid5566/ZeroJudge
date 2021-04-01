#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[20], n, i, findFail, findPass, maxFail, minPass;
	
	while (cin >> n) {
		findFail = 0;
		findPass = 0;
		maxFail = 0;
		minPass = 100;
		for (i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] < 60) {
				findFail = 1;
				if (arr[i] > maxFail)
					maxFail = arr[i];
			}
			else {
				findPass = 1;
				if (arr[i] < minPass)
					minPass = arr[i];
			}
		}
		
		sort(arr, arr + n);
		cout << arr[0];
		for (i = 1; i < n; i++) {
			cout << " " << arr[i];
		}
		
		if (findFail == 1)
			cout << "\n" << maxFail << endl;
		else
			cout << "\n" << "best case" << endl;
			
		if (findPass == 1)
			cout << "\n" << minPass << endl;
		else
			cout << "\n" << "worst case" << endl;
	}
	
	return 0;
}

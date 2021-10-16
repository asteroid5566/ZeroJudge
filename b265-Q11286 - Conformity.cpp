#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, i, j, max, num;
	
	while (cin >> n) {
		if (n == 0)
			break;

		string arr[5], s[10000];
		int count[10000];
		
		for (i = 0; i < n; i++) {
			for (j = 0; j < 5; j++) {
				cin >> arr[j];
			}
			sort(arr, arr + 5);
			s[i] = "";
			for (j = 0; j < 5; j++) {
				s[i] += arr[j];
			}
		}
		
		sort(s, s + n);
		
		count[0] = 1;
		for (i = 1; i < n; i++) {
			if (s[i] == s[i - 1]) {
				count[i] = count[i - 1] + 1;
				count[i - 1] = 0;
				s[i - 1] = "";
			}
			else
				count[i] = 1;
		}

		max = count[0];
		for (i = 0; i < n; i++)
			if (count[i] > max)
				max = count[i];

		num = 0;
		for (i = 0; i < n; i++)
			if (count[i] == max)
				num += count[i];
				
		cout << num << endl;
	}
	return 0;
}

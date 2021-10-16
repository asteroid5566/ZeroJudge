#include <iostream>
using namespace std;

int main()
{
	int t, n, i, max, index, point = 0;
	cin >> n >> t;
	int s[n], d[n];
	
	for (i = 0; i < n; i++)
		cin >> s[i] >> d[i];
	
	while (t--) {
		max = s[0];
		index = 0;
		for (i = 1; i < n; i++) {
			if (s[i] > max) {
				max = s[i];
				index = i;
			}
		}
		
		if (max == 0)
			break;

		point += max;
		s[index] -= d[index];
		if (s[index] < 0)
			s[index] = 0;
	}
	cout << point << endl;
	return 0;
}

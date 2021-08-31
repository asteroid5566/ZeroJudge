#include <iostream>
using namespace std;

int main()
{
	int n, i, j, max = 1, temp;
	string s1, s2;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> s2;
		s1 = "";
		for (j = s2.size() - 1; j >= 0; j--)
			s1 += s2[j];

		temp = 0;
		for (j = 0; j < s1.size(); j++) {
			if (j != 0)
				temp *= 10;
			temp += (int)s1[j] - '0';
		}
		
		if (temp > max)
			max = temp;
	}
	cout << max << endl;
	return 0;
}

// https://zerojudge.tw/ShowProblem?problemid=a013
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, i, j, flag;
	string s1, s2, except[6] = {"IV", "IX", "XL", "XC", "CD", "CM"}, 
		normal[7] = {"I", "V", "X", "L", "C", "D", "M"};
	int eVal[6] = {4, 9, 40, 90, 400, 900}, nVal[7] = {1, 5, 10, 50, 100, 500, 1000};
	
	while (cin >> s1 && s1 != "#") {
		cin >> s2;
		a = b = 0;
		
		for (i = 0; i < s1.size(); i++) {
			flag = 1;
			
			if (i <= s1.size() - 2) {
				for (j = 0; j < 6; j++) {
					if (s1.substr(i, 2) == except[j]) {
						a += eVal[j];
						i++;
						flag = 0;
						break;
					}
				}
			}
			
			if (flag) {
				for (j = 0; j < 7; j++) {
					if (s1[i] == normal[j][0]) {
						a += nVal[j];
						break;
					}
				}
			}
		}
		
		for (i = 0; i < s2.size(); i++) {
			flag = 1;
			
			if (i <= s2.size() - 2) {
				for (j = 0; j < 6; j++) {
					if (s2.substr(i, 2) == except[j]) {
						b += eVal[j];
						i++;
						flag = 0;
						break;
					}
				}
			}
			
			if (flag) {
				for (j = 0; j < 7; j++) {
					if (s2[i] == normal[j][0]) {
						b += nVal[j];
						break;
					}
				}
			}
		}
		
		c = a > b ? a - b : b - a;
		
		if (c == 0)
			cout << "ZERO" << endl;
		
		while (c > 0) {
			for (i = 5, j = 6; i >= 0 || j >= 0; ) {
				if (j < 0 && i >= 0) {
					if (c >= eVal[i]) {
						c -= eVal[i];
						cout << except[i];
					}
					else
						i--;
				}
				else if (i < 0 && j >= 0) {
					if (c >= nVal[j]) {
						c -= nVal[j];
						cout << normal[j];
					}
					else
						j--;
				}
				else if (eVal[i] > nVal[j]) {
					if (c >= eVal[i]) {
						c -= eVal[i];
						cout << except[i];
					}
					else
						i--;
				}
				else {
					if (c >= nVal[j]) {
						c -= nVal[j];
						cout << normal[j];
					}
					else
						j--;
				}
			}
		}
		cout << endl;
	}
	return 0;
}

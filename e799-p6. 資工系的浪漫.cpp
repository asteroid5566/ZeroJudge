// https://zerojudge.tw/ShowProblem?problemid=e799
#include <iostream>
using namespace std;

int main()
{
	long long n, m, i, j, k, dec;
	string s, c;
	cin >> n >> m;
	cin.ignore();
	cin >> c;
	
	for (i = 0; i < n; i++) {
		cin >> dec;
		s = "";
		
		for (j = 0; j < m; j++) {
			if (dec % 2)
				s.insert(0, c);
			else
				s.insert(0, ".");
			dec /= 2;
		}
		
		cout << s[0];
		for (k = 1; k < s.size(); k++)
			cout << " " << s[k];
		cout << endl;
	}
	
	return 0;
}

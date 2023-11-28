// https://zerojudge.tw/ShowProblem?problemid=f821
#include <iostream>
using namespace std;

int main()
{
	string n, g;
	int m, i, j, a, b;
	cin >> n >> m;
	
	while (m--) {
		a = b = 0;
		cin >> g;
		
		for (i = 0; i < n.size(); i++) {
			for (j = 0; j < g.size(); j++) {
				if (n[i] == g[j]) {
					if (i == j)
						a++;
					else
						b++;
				}
			}
		}
		cout << a << "A" << b << "B\n";
	}
	return 0;
}

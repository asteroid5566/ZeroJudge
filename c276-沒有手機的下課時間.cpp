// https://zerojudge.tw/ShowProblem?problemid=c276
#include <iostream>
using namespace std;

int main()
{
	int n, a, b, i, j;
	string q, g;
	cin >> q >> n;
	
	while (n--) {
		a = b = 0;
		cin >> g;
		
		for (i = 0; i < 4; i++) {
			if (q[i] == g[i])
				a++;
			else {
				for (j = 0; j < 4; j++) {
					if (g[j] == q[i])
						b++;
				}
			}
		}
		cout << a << "A" << b << "B" << endl;
	}
	
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	long long i, n, f, g;
	
	while(cin >> n) {
		f = 1;
		g = 1;

		for (i = 2; i <= n; i++) {
			f = i + f;
			g = f + g;
		}
		
		cout << f << " " << g << endl; 
	}
	return 0;
}

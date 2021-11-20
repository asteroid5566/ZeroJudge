// https://zerojudge.tw/ShowProblem?problemid=d299
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int f, o, r, t, y, e, n, s, i, x;
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	do {
		f = arr[0];
		o = arr[1];
		r = arr[2];
		t = arr[3];
		y = arr[4];
		e = arr[5];
		n = arr[6];
		s = arr[7];
		i = arr[8];
		x = arr[9];
		
		if (y + n + n + 10 * (t + e + e) + 100 * (r + t + t) +
			1000 * o + 10000 * f == y + 10 * t + 100 * x + 1000 * i + 10000 * s) {
			cout << f << o << r << t << y << " + " << t << e << n << " + "
				<< t << e << n << " = " << s << i << x << t << y << endl;
			break;
		}
	} while (next_permutation(arr, arr + 10));
	return 0;
}

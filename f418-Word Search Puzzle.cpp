// https://zerojudge.tw/ShowProblem?problemid=f418
#include <iostream>
using namespace std;

int main()
{
	int h, w, r1, c1, r2, c2, i, j;
	cin >> h >> w >> r1 >> c1 >> r2 >> c2; 
	string arr[h];
	r1--;
	r2--;
	c1--;
	c2--;
	
	for (i = 0; i < h; i++)
		cin >> arr[i];
		
	if (r1 == r2) {
		while (c1 <= c2)
			cout << arr[r1][c1++];
	}
	else if (c1 == c2) {
		while (r1 <= r2)
			cout << arr[r1++][c1];
	}
	else {
		while (r1 <= r2)
			cout << arr[r1++][c1++];
	}
	return 0;
}

// https://zerojudge.tw/ShowProblem?problemid=d626
#include <iostream>
using namespace std;

int n;
char arr[100][100];

void recursion(int r, int c)
{
	if (arr[r][c] == '-') {
		arr[r][c] = '+';
		if (r - 1 >= 0)
			recursion(r - 1, c);
		if (r + 1 < n)
			recursion(r + 1, c);
		if (c - 1 >= 0)
			recursion(r, c - 1);
		if (c + 1 < n)
			recursion(r, c + 1);
	}
}


int main()
{
	int i, j, r, c;
	cin >> n;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cin >> arr[i][j];
		cin.ignore();
	}

	cin >> r >> c;
	recursion(r, c);
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << arr[i][j];
		cout << endl;
	}
	return 0;
}

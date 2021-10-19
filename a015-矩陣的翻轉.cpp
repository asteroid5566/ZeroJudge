// https://zerojudge.tw/ShowProblem?problemid=a015
#include <iostream>
using namespace std;

int main()
{
	int mat[100][100], row, col, i, j;
	
	while (cin >> row >> col) {
		for (i = 0; i < row; i++) {
			for (j = 0; j < col; j++) {
				cin >> mat[i][j];
			}
		}
		
		for (i = 0; i < col; i++) {
			for (j = 0; j < row; j++) {
				cout << mat[j][i] << " ";
			}
			cout << endl;
		}
	}	
	return 0;
}

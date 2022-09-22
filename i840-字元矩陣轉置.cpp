// https://zerojudge.tw/ShowProblem?problemid=i840
#include <iostream>
using namespace std;

int main()
{
	int i, j; 
	char arr[5][5];
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			cin >> arr[i][j];
		cin.ignore();
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			cout << arr[j][i];
		cout << endl;
	}
	return 0;
}

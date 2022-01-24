// https://zerojudge.tw/ShowProblem?problemid=d587
#include <iostream>
using namespace std;

int main()
{
	int arr[3] = {0, 0, 0}, n, m, i;
	cin >> n;
	
	while (n--) {
		cin >> m;
		arr[m - 1]++;
	}
	
	for (i = 0; i < arr[0]; i++)
		cout << "1 ";
	for (i = 0; i < arr[1]; i++)
		cout << "2 ";
	for (i = 0; i < arr[2]; i++)
		cout << "3 ";
	cout << endl;
	return 0;
}





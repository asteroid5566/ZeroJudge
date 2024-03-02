// https://zerojudge.tw/ShowProblem?problemid=g488
#include <iostream>
using namespace std;

int main()
{
	int arr[201], x, i;
	cin >> x;
	arr[1] = 1;
	
	for (i = 2; i <= x; i++)
		arr[i] = arr[i - 1] + i * i - i + 1;
	
	cout << arr[x] << endl;
	return 0;
}

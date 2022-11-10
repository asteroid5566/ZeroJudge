// https://zerojudge.tw/ShowProblem?problemid=d212
#include <iostream>
using namespace std;

int main()
{
	long long arr[100], i;
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	
	for (i = 3; i <= 100; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	
	while (cin >> i)
		cout << arr[i] << "\n";
	return 0;
}

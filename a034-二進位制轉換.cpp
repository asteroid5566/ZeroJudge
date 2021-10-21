// https://zerojudge.tw/ShowProblem?problemid=a034
#include <iostream>
using namespace std;

int main()
{
	int arr[20], index, decimal;
	
	while (cin >> decimal) {
		index = -1;
		
		while (decimal > 0) {
			arr[++index] = decimal % 2;
			decimal /= 2;
		}
		
		for (int i = index; i >= 0; i--)
			cout << arr[i];
		cout << endl;
	}
	
	return 0;
}

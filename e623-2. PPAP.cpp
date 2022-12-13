// https://zerojudge.tw/ShowProblem?problemid=e623
#include <iostream>
using namespace std;

int main()
{
	int arr[10001], n = 1, i = 1, j;
	
	while (i <= 10000) {
		for (j = 0; j < n; j++)
			if (i <= 10000)
				arr[i++] = 1;
		for (j = 0; j < n; j++)
			if (i <= 10000)
				arr[i++] = 2;
		for (j = 0; j < n; j++)
			if (i <= 10000)
				arr[i++] = 3;
		for (j = 0; j < n; j++)
			if (i <= 10000)
				arr[i++] = 4;
		n++;
	}
	
	cin >> i;
	if (arr[i] == 1)
		cout << "Pen";
	else if (arr[i] == 2)
		cout << "Pineapple";
	else if (arr[i] == 3)
		cout << "Apple";
	else 
		cout << "Pineapple pen";
	return 0;
}

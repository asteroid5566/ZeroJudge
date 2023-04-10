// https://zerojudge.tw/ShowProblem?problemid=f071
#include <iostream>
using namespace std;

int main()
{
	int lucky[3], num[5], reward[5], i, j, sum = 0, third = 0;
	
	for (i = 0; i < 3; i++)
		cin >> lucky[i];
	for (i = 0; i < 5; i++)
		cin >> num[i];
	for (i = 0; i < 5; i++)
		cin >> reward[i];
	
	for (i = 0; i < 5; i++) {
		if (lucky[0] == num[i])
			sum += reward[i];
		if (lucky[1] == num[i])
			sum += reward[i];
		if (lucky[2] == num[i]) {
			sum -= reward[i];
			third = 1;
		}
	}
	
	if (!third)
		sum *= 2;
	if (sum < 0)
		sum = 0;
	cout << sum << endl;
	
	return 0;
}

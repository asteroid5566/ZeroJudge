// https://zerojudge.tw/ShowProblem?problemid=e447 
#include <iostream>
using namespace std;

int arr[1000001];

int main()
{
	int n, head = 0, tail = 0, k, x;
	cin >> n;
	
	while (n--) {
		cin >> k;
		
		if (k == 1) {
			cin >> x;
			if (!head)
				head++;
			tail++;
			arr[tail] = x;
		}
		else if (k == 2) {
			if (!head || head > tail)
				cout << "-1\n";
			else
				cout << arr[head] << "\n";
		}
		else {
			if (head && head <= tail)
				head++;
		}
	}
	return 0;
}

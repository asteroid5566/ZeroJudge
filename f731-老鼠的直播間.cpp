// https://zerojudge.tw/ShowProblem?problemid=f731
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, i, max = -1, count = 0, j = 0;
	cin >> n;
	int enter[n], leave[n];
	
	for (i = 0; i < n; i++)
		cin >> enter[i] >> leave[i];
	
	sort(enter, enter + n);
	sort(leave, leave + n);
	
	for (i = 0; i < n; i++) {
		count++;
		while (leave[j] <= enter[i]) {
			count--;
			j++;
		}
		if (count > max)
			max = count;
	}
	
	cout << max;
	return 0;
}

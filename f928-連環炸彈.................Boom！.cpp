// https://zerojudge.tw/ShowProblem?problemid=f928
#include <iostream>
using namespace std;

int arr[1001], flag[1001], n;

void bfs(int t)
{
	if (flag[t])
		return;
	flag[t] = 1;
	
	if (arr[t] == 1)
		arr[t] = 0;
	else if (arr[t] == 2) {
		arr[t] = 0;
		if (t - 1 >= 0)
			bfs(t - 1);
		if (t + 1 < n)
			bfs(t + 1);
	}
	else {
		int k = arr[t];
		arr[t] = 0;
		if (t - k >= 0)
			bfs(t - k);
		if (t - k * 2 >= 0)
			bfs(t - k * 2);
		if (t + k < n)
			bfs(t + k);
		if (t + k * 2 < n)
			bfs(t + k * 2);
	}
}

int main()
{
	int i, t;
	cin >> n;
	
	for (i = 0; i < n; i++)
		cin >> arr[i];
	cin >> t;
	bfs(t);
	
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}

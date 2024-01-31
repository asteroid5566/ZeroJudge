// https://zerojudge.tw/ShowProblem?problemid=g308
#include <iostream>
using namespace std;

int main()
{
	int i, n, t, tmp, cnt = 0;
	cin >> n >> t;
	int arr[n], flag[n];
	
	for (i = 0; i < n; i++)
		cin >> arr[i];
	for (i = 0; i < n; i++)
		cin >> flag[i];	
	
	while (arr[t] != -1) {
		if (flag[t])
			cnt++;
		tmp = arr[t];
		arr[t] = -1;
		t = tmp;
	}
	cout << cnt << "\n"; 
	return 0;
}

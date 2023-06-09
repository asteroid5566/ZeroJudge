// https://zerojudge.tw/ShowProblem?problemid=a522
#include <iostream>
using namespace std;

int n, p, arr[51], flag;

void recursion(int l, int idx)
{
	if (l == n || flag) {
		flag = 1;
		return;
	}
	
	if (l > n || idx >= p)
		return;
	
	recursion(l, idx + 1);
	recursion(l + arr[idx], idx + 1);
}

int main()
{
	int t, i;
	cin >> t;
	
	while (t--) {
		cin >> n >> p;
		for (i = 0; i < p; i++)
			cin >> arr[i];
		
		flag = 0;
		recursion(0, 0);
		
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	} 
	return 0;
}

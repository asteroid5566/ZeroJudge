// https://zerojudge.tw/ShowProblem?problemid=f260
#include <iostream>
using namespace std;

int find(int *arr, int x)
{
	if (arr[x] != x)
		return find(arr, arr[x]);
	return x;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k, i, a, b, root1, root2, count;
	
	while (cin >> n >> k) {
		int arr[n];
		count = 0;
		for (i = 0; i < n; i++)
			arr[i] = i;
		
		while (k--) {
			cin >> a >> b;
			root1 = find(arr, a);
			root2 = find(arr, b);
			
			arr[root1] = root2;
		}
		
		for (i = 0; i < n; i++) {
			if (arr[i] == i)
				count++;
		}
		
		cout << count << "\n";
	}
	return 0;
}

#include <iostream>
using namespace std;

int find(int *arr, int m)
{
	if (arr[m] != m)
		return find(arr, arr[m]);
	return m;
}

int main()
{
	int N, m, i, count = 0, root1, root2;
	cin >> N;
	int arr[N];
	for (i = 0; i < N; i++)
		arr[i] = i;
	
	for (i = 0; i < N; i++) {
		cin >> m;
		if (m < i) {
			root1 = find(arr, m);
			root2 = find(arr, i);
			arr[root2] = root1;
		}
		else if (i < m) {
			root1 = find(arr, i);
			root2 = find(arr, m);
			arr[root2] = root1;
		}
	}
	
	for (i = 0; i < N; i++)
		if (arr[i] == i)
			count++;
	cout << count << endl;
	
	return 0;
}

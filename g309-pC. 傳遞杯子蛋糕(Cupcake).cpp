// https://zerojudge.tw/ShowProblem?problemid=g309
#include <iostream>
using namespace std;

struct NODE {
	int left, right, cnt;
} arr[10];

void recursion(int curr, int k)
{
	int node = 1;
	if (arr[curr].left != -1)
		node++;
	if (arr[curr].right != -1)
		node++;
	arr[curr].cnt = k / node + k % node;
	
	if (arr[curr].left != -1)
		recursion(arr[curr].left, k / node);
	if (arr[curr].right != -1)
		recursion(arr[curr].right, k / node);
}

int main()
{
	int n, k, i, a;
	cin >> n >> k;
	
	for (i = 0; i < n; i++)
		cin >> a >> arr[a].left >> arr[a].right;
	
	recursion(0, k);
	
	for (i = 0; i < n; i++)
		cout << arr[i].cnt << " ";
	return 0;
}

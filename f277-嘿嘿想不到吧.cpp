// https://zerojudge.tw/ShowProblem?problemid=f277
#include <iostream>
#include <algorithm>
using namespace std;

struct STU {
	int c, n;
	string name, intro;
};

bool cmp(STU a, STU b)
{
	return a.c != b.c ? a.c < b.c : a.n < b.n;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int d, i;
	cin >> d;
	STU arr[d];
	
	for (i = 0; i < d; i++)
		cin >> arr[i].name >> arr[i].c >> arr[i].n >> arr[i].intro;
	sort(arr, arr + d, cmp);

	cout << arr[0].c << " " << arr[0].n << " " << arr[0].name << "\n" << arr[0].intro;
	for (i = 1; i < d; i++)
		cout << "\n" << arr[i].c << " " << arr[i].n << " " << arr[i].name << "\n" << arr[i].intro;
	
	return 0;
}

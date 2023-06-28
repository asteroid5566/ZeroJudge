// https://zerojudge.tw/ShowProblem?problemid=f290
#include <iostream>
#include <algorithm>
using namespace std;

struct VAL {
	int atk, def;
};

bool cmp(VAL a, VAL b)
{
	return a.atk == b.atk ? a.def < b.def : a.atk < b.atk;
}

int main()
{
	int n, i;
	cin >> n;
	VAL arr[n];
	
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i].def);
	
	arr[0].atk = arr[0].def;
	arr[n - 1].atk = arr[n - 1].def;
	
	for (i = 1; i < n - 1; i++)
		arr[i].atk = arr[i - 1].def + arr[i + 1].def;
		
	sort(arr, arr + n, cmp);
	
	for (i = 0; i < n; i++)
		printf("%d %d\n", arr[i].atk, arr[i].def);
		
	return 0;
}

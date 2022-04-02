// https://zerojudge.tw/ShowProblem?problemid=c431
// forbid <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int arr[101] = {0}, n, i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &j);
		arr[j]++;
	}
	
	for (i = 1; i < 101; i++) {
		for (j = 0; j < arr[i]; j++)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}

#include <stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n);
	int arr[n][5];
	for(i = 0; i < n; i++)
		scanf("%d%d%d%d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
	
	for(i = 0; i < n; i++)
	{
		if(arr[i][1] - arr[i][0] == arr[i][2] - arr[i][1])
		{
			printf("%d %d %d %d %d\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][3] + arr[i][3] - arr[i][2]);
		}
		else if(arr[i][1] / arr[i][0] == arr[i][3] / arr[i][2])
		{
			printf("%d %d %d %d %d\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][3] * arr[i][3] / arr[i][2]);
		}
	}
	return 0;
}

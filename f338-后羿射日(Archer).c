#include <stdio.h>
#include <math.h>

int main()
{
	int i, sum = 0, l0, r, n;
	double x0, y0;
	scanf("%lf%lf%d%d%d", &x0, &y0, &l0, &r, &n);
	int arr[3 * n];
	
	for (i = 0; i < n; i++)
	{
		scanf("%d%d%d", &arr[0 + i * 3], &arr[1 + i * 3], &arr[2 + i * 3]);
	}
	
	for (i = 0; i < n; i++)
	{
		if (l0 >= arr[2 + i * 3] && r >= sqrt(pow(arr[0 + i * 3] - x0, 2) + pow(arr[1 + i * 3] - y0, 2)))
			sum++;
	}
	printf("%d", sum);
	return 0;
}

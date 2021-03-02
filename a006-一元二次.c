#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &c);
	d = b * b - 4 * a * c;

	if (d < 0)
	{
		printf("No real root");
		return 0;
	}
	else if(d == 0)
	{
		printf("Two same roots x=%d", (-b + (int)sqrt(d))/(2 * a));
	}
	else
	{
		printf("Two different roots x1=%d , x2=%d", (-b + (int)sqrt(d))/(2 * a), (-b - (int)sqrt(d))/(2 * a));
	}
	return 0;
}

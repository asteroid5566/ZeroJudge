#include <stdio.h>

int main()
{
	int a, b, i, j, count = 0;
	
	while (scanf("%d", &a) != EOF)
	{
		scanf("%d", &b);
		a = a == 1 ? 2 : a;
		for (i = a; i <= b; i++)
		{
			for (j = 2; j * j <= i; j++)
			{
				if (i % j == 0)
					break;
			}
			if (j * j > i)
				count++;
		}
		printf("%d\n", count);
		count = 0;
	}
	return 0;
}

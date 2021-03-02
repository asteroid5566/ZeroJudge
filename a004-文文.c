#include <stdio.h>

int main()
{
	int t;
	while(scanf("%d", &t) != EOF)
	{
		if(t % 4 == 0 && (t % 100 != 0 || t % 400 == 0))
		{
			printf("¶|¦~\n"); 
		}
		else
			printf("¥­¦~\n");
	}
	return 0;
}

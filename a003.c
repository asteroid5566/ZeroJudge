#include <stdio.h>

int main()
{
	int m, d, s;
	scanf("%d%d", &m, &d);
	s = (m * 2 + d) % 3;
	switch (s)
	{
		case 0: printf("´¶³q"); 
		break;
		case 1: printf("¦N");
		break;
		case 2: printf("¤j¦N");
	}
	return 0;
}

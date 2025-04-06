#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int t, a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		int g = b % 4;
		int r = a;
		if (g == 0)
		{
			g = 4;
		}
		for (int i = 1; i < g; i++)
		{
			r *= a;
		}
		if (r % 10 == 0)
		{
			printf("%d\n", 10);
		}
		else
		{
			printf("%d\n", r % 10);
		}
	}
}
	

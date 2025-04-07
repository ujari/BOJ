#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	if (n == 1)
	{
		printf("%d", 1);
		return 0;
	}
	else if (n == 2 || n == 3)
	{
		printf("%d", 2);
		return 0;
	}

	int d;
	for (int i = 4; !(n < i); i *= 2)
	{
		d = i;
	}
	if (n == d||n==d*2)
	{
		printf("%d", n);
		return 0;
	}
	int re = 2;
	for (int i = d+1; i!=n; i++)
	{
		re += 2;
	}
	printf("%d", re);
	return 0;
}
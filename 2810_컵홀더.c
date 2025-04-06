#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	char s[50];
	scanf("%s", s);

	int cup = 1;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'S')
		{
			cup++;
		}
		if (s[i] == 'L')
		{
			cup++;
			i++;
		}
	}
	if (cup > n)
	{
		cup = n;
	}
	printf("%d", cup);
}
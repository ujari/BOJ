#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char n1[101];
	char n2[101];
	scanf("%s", n1);
	strcpy(n2, n1);
	int l = strlen(n2);
	for (int i = 0; i < l / 2; i++)
	{
		char t = n2[l -1 - i];
		n2[l - 1 - i] = n2[i];
		n2[i] = t;
	}

	int re= strcmp(n2, n1) == 0?1:0;

	printf("%d", re);
}
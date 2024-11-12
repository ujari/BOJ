#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int num1, num2;
void print(char* n1, char* n2)
{
	for (int i = 0; i < num1; i++)
	{
		printf('%c', n1[i]);
	}
	for (int i = 0; i < num2; i++)
	{
		printf('%c', n2[i]);
	}
}

int main()
{
	
	scanf("%d %d", &num1, &num2);

	char* n1 = (char*)malloc(sizeof(char) * num1);
	char* n2 = (char*)malloc(sizeof(char) * num2);

	int t;
	scanf("%d", &t);

	if (t == 0)
	{
		print(n1, n2);
	}
	int i = 0;
	while (i<t)
	{
		for (i; i <= 0; i++)
		{

		}
	}

	return 0;
}
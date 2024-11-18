#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main() {
	int t;
	scanf("%d", &t);
	int* n = (int*)malloc(sizeof(int) * t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n[i]);
	}

	int re = 0;
	for (int i = t-1; i >0; i--)
	{

		while (n[i-1]>=n[i])
		{

			n[i-1]--;
			re++;
		}
	}

	printf("%d", re);
	return 0;
}
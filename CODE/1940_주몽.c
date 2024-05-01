#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n,m;
	int re = 0;
	scanf("%d %d", &n, &m);
	
	
	int* arr = (int*)malloc(sizeof(int) * n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j+1< n; j++)
		{
			if (arr[i] != -1 && arr[j] != -1)
			{
				if (arr[i] + arr[j+1] == m)
				{
					re += 1;
				
				}
			}
		}
	}
	if (n == 1 || m == 1)
	{
		printf("0");
		return 0;
	}
	printf("%d", re);
}
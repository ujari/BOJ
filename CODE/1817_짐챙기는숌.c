#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n, m;
	int box = 0;
	scanf("%d %d", &n, &m);

	if (n <= 0)
	{
		printf("%d", 0);
		return 0;
	}
	else
	{
		int* g = (int*)malloc(sizeof(int) * n);

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &g[i]);

		}

		for (int i = 0; i < n; i++)
		{	
			int temp = g[i];
			for (int j = i;(temp!=-1); j++)
			{
				if (temp + g[j + 1] <= m)
				{
					temp += g[j + 1];
					i++;
				}
				else
				{
					box++;
					temp = -1;
				}
			}

		}
		
	}

	printf("%d", box);

}
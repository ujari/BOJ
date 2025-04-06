#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{

	int n = 0;
	scanf("%d", &n);
	int* table = (int*)malloc(sizeof(int) * n);
	int* re = (int*)calloc(n,sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &table[i]);

	}


	for (int i = 0; i <= table[0]; i++)
	{
		re[0] = i;
		for (int ii = 1; ii < n; ii++)
		{
			re[ii] = table[ii-1] - re[ii-1];

		}

		int b = 1;
		for (int iii = 0; iii < n-1; iii++)
		{
			if (re[iii] + re[iii + 1] != table[iii])b = 0;
		}
		if (re[n - 1] + re[0]!=table[n-1])b = 0;

		if (b)
		{
			for(int i=0;i<n;i++)printf("%d\n", re[i]);
		}
		
	}
}
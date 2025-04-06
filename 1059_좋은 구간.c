#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int l,n;
	scanf("%d", &l);
	int* data = (int*)malloc(sizeof(int) * l);
	for (int i = 0; i < l; i++)
	{
		scanf("%d", &data[i]);
		
	}
	int temp = 0;
	for (int i = 0; i < l ; i++)
	{
		for (int j = 0; j < l-1; j++)
		{
			if (data[j] > data[j + 1])
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	scanf("%d", &n);

	
	int min=-1;
	for (int i = 0; i < l; i++)
	{
		if (data[i] < n)
		{
			min = i;

		}

		if (data[i] == n)
		{
			printf("0");
			return 0;
		}

		
	}
	int max=0;
	for (int i = 0; i < l; i++)
	{
		if (data[i] > n) {
			max = i;
			break;
		}
	}

	int e;
	int s;
	if (min == -1)
	{
		s = 1;
		e = data[0] - 1;
	}
	else
	{

		 s = data[min] + 1;
		 e = data[max] - 1;
	}

	int re = 0;
	
	re =( (e - n) + 1) * (n - s) + (e - n);

	
	
	printf("%d", re);
	
}

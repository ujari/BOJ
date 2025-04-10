#include<stdio.h>
#include<stdlib.h>

int CompareAscen(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)return 1;
	else return -1;
}

int FindMax(int* data,int size)
{
	int max = 0;
	int Maxindex=0;
	for (int i=0; i < size; i++)
	{
		if (data[i] > max)
		{
			max = data[i];
			Maxindex = i;
		}
	}

	data[Maxindex] = -1;

	return max;
}

int main()
{
	int n;
	scanf("%d", &n);
	int* data1 = (int*)malloc(sizeof(int)*n);
	int* data2 = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data1[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data2[i]);
	}
	qsort(data1, n, sizeof(int), CompareAscen);
	
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += data1[i] * FindMax(data2,n);
	}

	printf("%d", s);
	free(data1);
	return 0;
}
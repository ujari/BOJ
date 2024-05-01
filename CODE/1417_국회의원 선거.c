#include<stdio.h>
#include <stdlib.h>

int fun(int arr[],int max)
{
	int maxnum;
	for (int i = 1; i < max-1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			maxnum = i;
		}
	}
	
}

int main()
{	
	int t;
	scanf("%d", &t);
	int* arr = (int*)malloc(sizeof(int) * t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &arr[i]);
	}
	int user = arr[0];
	
}
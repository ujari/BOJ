#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void sort(int* arr, int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j <i-1; j++){
			int temp;
			if (arr[j] > arr[j+1]) 
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	int arr[1000];
	for (int i = 0; i < t; i++)scanf("%d", &arr[i]);

	sort(arr,t);
	for (int i = 0; i < t; i++)printf("%d\n", arr[i]);

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>


int main()
{
	int num, num2;
	scanf("%d %d", &num, &num2);

	if (num == 1)num += 1;
	int* arr = (int*)calloc(1000001, sizeof(int));

	for (int i = 2; i <= 1000001; i++)
	{
		if (arr[i] == 0)
		{
			arr[i] = i;
			for (int k = i * 2; k <= 1000001; k += i) {
				arr[k] = 1;
			}
		}
	}

	for (int i = num; i <= num2; i++)
	{
		if (arr[i] != 1)
		{
			printf("%d\n", arr[i]);
		}
	}
}
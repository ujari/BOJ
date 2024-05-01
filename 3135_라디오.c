#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{


		int a, b;
		scanf("%d %d", &a, &b);
		int n;
		scanf("%d", &n);
		int* arr = (int*)malloc(sizeof(int) * n);
		int temp = abs(a - b);
		int current_arr = a;
		int p = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
			if (abs(arr[i] - b) < temp)
			{
				temp = abs(arr[i] - b);
				current_arr = arr[i];
				p = 1;
			}
			
		}

		if (a == b)
		{
			printf("0");
			return 0;
		}

		if (current_arr == b||abs(a-b==1))
		{
			printf("1");
			return 0;
		}

		if (abs(a - b) != 1&&p)
		{
			printf("%d", temp + 1);
			return 0;
		}
		
		printf("%d", temp);
		
}
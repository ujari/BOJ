#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int* data = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)scanf("%d", &data[i]);
	
	int count = 0;
	int Index=0;

	for (int i = n - 1; i >= 0; i--)
	{
		if (k / data[i] > 0)
		{
			Index = i;
			break;
		}
	}

	while (k != 0) {

		if (k >= data[Index])
		{
			k -= data[Index];
			
		}
		else
		{
			while (k / data[Index]==0)
			{
				Index--;
			}
			k -= data[Index];
		}
		count++;
	}

	printf("%d", count);
}
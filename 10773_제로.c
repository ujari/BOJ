#include<stdio.h>
#include<stdlib.h>

int main()
{
	int k;
	scanf("%d", &k);
	int* data = (int*)malloc(sizeof(int) * k);
	int index = 0;
	for (int i = 0; i < k; i++)
	{
		int temp;
		scanf("%d", &temp);
		if (temp != 0)
		{
			data[index++] = temp;
		}
		else
		{
			index--;
		}
	}

	int sum = 0;
	for (int i = 0; i < index; i++)
	{
		sum += data[i];
	}
	printf("%d", sum);

	free(data);
	return 0;

}
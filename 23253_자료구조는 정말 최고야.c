#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		int t;//더미에 쌓인 책의 수
		int temp;
		int input;
		scanf("%d", &t);
		scanf("%d", &temp);
		for (int ii = 1; ii < t; ii++)
		{
			scanf("%d", &input);
			if (temp > input)temp = input;
			else
			{
				printf("No");
				return 0;
			}
		}
	
	}

	printf("Yes");
	return 0;
}
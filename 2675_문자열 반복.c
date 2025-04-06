#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		char data[21];
		int n;
		scanf("%d %s", &n, data);
		for (int ii = 0; ii<21; ii++)
		{
			if (data[ii] != '\0') {
				for (int iii = 0; iii < n; iii++)
				{
					printf("%c", data[ii]);
				}
			}
			else
			{
				break;
			}
		}
		printf("\n");
	}
}
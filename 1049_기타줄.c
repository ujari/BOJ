#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main() {
	int n, m;
	scanf("%d %d ", &n, &m);
	int setMin=1000, min=1000;
	for (int i = 0; i < m; i++)
	{
		int set, ind;
		scanf("%d %d", &set, &ind);

		if (setMin > set)
		{
			setMin = set;
		}
		if (min > ind)
		{
			min = ind;
		}
	}

	if (min > setMin && n <= 6)
	{
		printf("%d", setMin);
		return 0;
	}
	else
	{
		if (min * 6 >= setMin)
		{
			int re;
			re = setMin * (n / 6);
			n -= (n / 6) * 6;
			if (n == 0)
			{
				printf("%d", re);
				return 0;
			}
			if (min * n > setMin)
			{
				re += setMin;
				printf("%d", re);
				return 0;
			}
			else
			{
				re += min * n;
				printf("%d", re);
			}
		}
		else
		{
			printf("%d", n * min);
		}
	}
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int input;
	scanf("%d", &input);

	int n = input;
	
	int re=0;
	if (n <= 10)
	{
		if (n % 3 == 0)
		{
			printf("%d", n / 3);
			return 0;
		}
		else if (n % 5 == 0)
		{
			printf("%d", n / 5);
			return 0;
		}
		else if (n == 4 || n == 7)
		{
			printf("%d", -1);
			return 0;
		}
		else
		{
			printf("%d", 2);
			return 0;
		}
	}
	else
	{
		int temp = n;
		temp /= 10;
		temp *= 10;
		if (n % 5 == 0) {
			printf("%d", n / 5);
			return 0;
		}
		else
		{
			re = temp / 5;
		}

		n = (n % 10);
		if (n % 3 == 0)
		{
			re += n / 3;
		}
		else if (n % 5 == 0)
		{
			re += n / 5;
		}
		else if (n == 4||n==2||n==8)
		{
			re += 2;
		}
		else if (n == 7)
		{
			re += 3;
		}
		else
		{
			re += 1;
		}
	}

	printf("%d", re);

}
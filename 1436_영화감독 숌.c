#include<stdio.h>

int main()
{
	int input;
	scanf("%d", &input);

	int count = 1;
	if (input == 1)
	{
		printf("%d", 666);
		return 0; 
	}

	int i = 666;

	while (count != input)
	{
		i++;
		if (i%10==6&& ((i / 10) % 10 == 6)&&((i / 100) % 10 == 6))
		{
			count++;
			continue;
		}
		if (((i / 10) % 10 == 6) && ((i / 100) % 10 == 6) && ((i / 1000) % 10 == 6))
		{
			count++;
			continue;
		}
		if (((i / 100) % 10 == 6) && ((i / 1000) % 10 == 6) && ((i / 10000) % 10 == 6))
		{
			count++;		
			continue;
		}
		if (((i / 1000) % 10 == 6) && ((i / 10000) % 10 == 6) && ((i / 100000) % 10 == 6))
		{
			count++;
			continue;
		}
		if (((i / 10000) % 10 == 6) && ((i / 100000) % 10 == 6) && ((i / 1000000) % 10 == 6))
		{
			count++;
			continue;
		}

	}
	printf("%d", i);
}
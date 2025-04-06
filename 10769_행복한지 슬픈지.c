#include<stdio.h>

void count(char* messege)
{

	
	int h = 0;
	int s = 0;
	int i = 0;
	while (messege[i]!='\0' && messege[i + 1] != 0 - '\0')
	{
		if (messege[i] == ':' && messege[i + 1] == '-')
		{
			if (messege[i + 2] == ')')
			{
				h++;
			}
			if (messege[i + 2] == '(')
			{
				s++;
			}
		}
		i++;
	}
	if (h > s)
	{
		printf("happy");
	}
	if (h < s)
	{
		printf("sad");
	}
	if (h == s&&s!=0&&h!=0)
	{
		printf("unsure");
	}
	if (h ==0&& s==0)
	{
		printf("none");
	}

}


int main()
{
	char messege[255];

	fgets(messege,sizeof(messege),stdin);
	count(messege);

}
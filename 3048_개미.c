#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	char name[100];
	int g[100];
}ant;


int main()
{

	int num1, num2;

	scanf("%d %d", &num1, &num2);
	char* temp = (char*)malloc(sizeof(char) * num1 + 1);
	ant n;
	//입력
	scanf("%s", temp);
	for(int i=0;i<num1/2;i++)
	{
		char t = temp[num1-1-i];
		temp[num1 - 1 - i] = temp[i];
		temp[i] = t;
	}

	strcpy(n.name, temp);

	for (int i = 0; i < num1; i++)
	{
		n.g[i] = 0;
	}

	scanf("%s",temp);


	strcpy(&n.name[num1], temp);
	
	for (int i = num1; i < num1+num2; i++)
	{
		n.g[i] = 1;
	}

	int t;
	scanf("%d", &t);

	int num=num1+num2;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j <= num-2; j++)
		{
			if (n.g[j] < n.g[j + 1])
			{
				char t_name= n.name[j + 1];
				int t_g = n.g[j + 1];
				
				n.g[j + 1] = n.g[j];
				n.name[j + 1] = n.name[j];
				
				n.name[j] = t_name;
				n.g[j] = t_g;
				j++;
			}
		}
	}

	//출력
	printf("%s", n.name);
	return 0;
}




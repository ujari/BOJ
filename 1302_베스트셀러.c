#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct max_book {
	int index_num;
	int count;
}max_book;

int main()
{
	int n;
	scanf("%d", &n);

	//���ڿ� �����ϴ� 2���� �迭
	char** bookname;
	bookname = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
	{
		bookname[i] = (char*)malloc(sizeof(char) * 50);
	}

	//���ڿ� �Է�
	for (int i = 0; i < n; i++)
	{
		scanf("%s", bookname[i]);
	}

	if (n == 1)
	{
		printf("%s", bookname[0]);
		return 0;
	}

	//���ڿ� ����
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(bookname[i], bookname[j]) > 0)
			{
				char temp[50];
				strcpy(temp, bookname[i]);
				strcpy(bookname[i], bookname[j]);
				strcpy(bookname[j], temp);
			}
		}
	}

	max_book index;
	index.count = -2;
	int count = 0;
	int i = 0;
	while (i < n - 1)
	{
		if (!strcmp(bookname[i], bookname[i + 1]))
		{
			count++;
		}

		if (((strcmp(bookname[i], bookname[i + 1]) < 0 || strcmp(bookname[i], bookname[i + 1]) > 0)) || i + 1 == n - 1)
		{
			if (index.count == count + 1)
			{
				if (strcmp(bookname[index.index_num], bookname[i]) > 0){
					index.index_num = i;
					index.count = count + 1;
				}
			}
			else if (index.count < count+1)
			{

				index.index_num = i ;
				index.count = count + 1;
			}

			count = 0;


		}
		i++;
	}
	

	printf("%s\n", bookname[index.index_num]);

	
	
	return 0;
}
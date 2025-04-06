#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node {
	char word;
	int count;
}node;

void search(node arr[], char input[], int size) {


	for (int j = 0; j < size; j++) {
		int i = 0;
		int ex = 0;
		if (input[j] >= 97)input[j] -= 32;
		while (1)
		{
			if (arr[i].word == '\0')
			{
				arr[i].word = input[j];
				break;
			}

			if (arr[i].word == input[j])
			{
				arr[i].count++;
				break;
			}
			i++;
		}

	}

}

void search_max(node arr[], int size)
{
	int max_count = 0;
	int max_index = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i].count > max_count)
		{
			max_count = arr[i].count;
			max_index = i;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i].count == max_count && max_index != i)
		{
			printf("?");
			return;
		}
	}

	printf("%c", arr[max_index].word);

}


int main()
{
	char input[1000000];
	scanf("%s", input);
	node* arr = (node*)calloc(strlen(input), sizeof(node));

	int size = strlen(input);
	search(arr, input, size);
	search_max(arr, size);

	return 0;
}
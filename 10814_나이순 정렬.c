
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct data {
	int age;
	char name[101];
	int regi;
}data;

int compare(const void* a, const void* b)
{
	if ((*(data*)a).age > (*(data*)b).age)
	{
		return 1;
	}
	else if ((*(data*)a).age == (*(data*)b).age)
	{
		if ((*(data*)a).regi > (*(data*)b).regi)return 1;
		else return -1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	data* d = (data*)malloc(sizeof(data) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &d[i].age, &d[i].name);
		d[i].regi = i;
	}
	
	qsort(d, n, sizeof(data), compare);
	for (int i = 0; i < n; i++)
	{
		printf("%d %s\n", d[i].age, d[i].name);
	}

}
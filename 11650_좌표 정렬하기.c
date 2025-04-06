#include<stdio.h>
#include<stdlib.h>


typedef struct data {
	int x;
	int y;
}data;

int compare(const void* a, const void* b)
{

	if ((*(data*)a).x == (*(data*)b).x)
	{
		return (*(data*)a).y - (*(data*)b).y;
	}
	return (*(data*)a).x - (*(data*)b).x;
	

}


int main()
{
	int n;
	scanf("%d", &n);
	data* d = (data*)malloc(sizeof(data) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &d[i].x, &d[i].y);

	}
	qsort(d, n, sizeof(data), compare);


	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", d[i].x, d[i].y);

	}
	return 0;
}
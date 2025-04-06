#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n;
	scanf("%d", &n);

	int* data = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)scanf("%d", &data[i]);

	qsort(data, n, sizeof(int), compare);
	for (int i = 0; i < n; i++)printf("%d\n", data[i]);


}
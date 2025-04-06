#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n;
	scanf("%d", &n);

	float* data = (float*)malloc(sizeof(float) * n);
	float sum = 0;
	for (int i = 0; i < n; i++)scanf("%f", &data[i]);
	qsort(data, n, sizeof(float), compare);
	float m = data[n - 1];
	for (int i = 0; i < n; i++)
	{
		data[i] = data[i] / m * 100;
		sum += data[i];
	}

	printf("%f\n", sum / n);

}
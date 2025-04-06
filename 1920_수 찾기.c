#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b)
{
	if (*(long long*)a > *(long long*)b)return 1;
	else return - 1;
}

int main()
{

	int n, m;
	scanf("%d", &n);
	long long* comData = (long long*)malloc(sizeof(long long) * n);
	for (int i = 0; i < n; i++) scanf("%lld", &comData[i]);
	qsort(comData, n, sizeof(long long), compare);


	scanf("%d", &m);
	long long* Data = (long long*)malloc(sizeof(long long) * m);
	for (int i = 0; i < m; i++) scanf("%lld", &Data[i]);
	
	for (int i = 0; i < m; i++)
	{
		long long left = 0;
		long long right = n-1;
		long long mid = (left + right)/2;

		while (1)
		{
			if (comData[mid] == Data[i])
			{
				printf("%d\n", 1);
				break;
			}

			if (right<=left) {
				printf("%d\n", 0);
				break;
			}

			if (Data[i] > comData[mid])
			{
				left = mid + 1;
				mid = (left + right) / 2;
			}
			else
			{
				right = mid - 1;
				mid = (left + right) / 2;

			}
		}


	}
	return 0;
}
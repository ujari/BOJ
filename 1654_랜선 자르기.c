#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int static compare(const void* first, const void* second)
{
	if (*(long long*)first > *(long long*)second)
		return 1;
	else if (*(long long*)first < *(long long*)second)
		return -1;
	else
		return 0;
}
int main()
{

	long long k, n;
	scanf("%lld %lld", &k, &n);
	long long* arr = (long long*)malloc(sizeof(long long) * k);
	long long max = -1;
	for (int i = 0; i < k; i++)
	{
		scanf("%lld", &arr[i]);
		if (arr[i] >max)max = arr[i];
	
	} 
	qsort((long long*)arr, k, sizeof(long long), compare);
	long long low = 1;
	long long high = max;
	long long mid;
	long long re = 0;


	while (low<=high)
	{
		re = 0;
		mid = (low + high) / 2;
		for (int i = 0; i < k; i++)
		{
			re += arr[i] / mid;
		}

		if (re >= n) {
			low = mid + 1;
		}
		else if(re<n)
		{
			high = mid - 1;
		}

	}

	printf("%lld", high);

}
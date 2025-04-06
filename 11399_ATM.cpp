#include<iostream>
#include<stdlib.h>
using namespace std;

int compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int n;
	cin >> n;
	int* data = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> data[i];
	}
	qsort(data, n, sizeof(int), compare);

	int re_sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int ii = 0; ii <= i; ii++)
		{
			re_sum += data[ii];
		}
		
	}

	cout << re_sum;


}
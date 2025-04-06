#include<stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    short data[10001] = { 0, };

    for (short i = 0; i < n; i++)
    {
        short temp;
        scanf("%hd", &temp);
        data[temp]++;
    }

    for (short i =0; i <= n; i++)
    {
        if (data[i] != 0) {
            for (short ii = 0; ii < data[i]; ii++)
            {
                printf("%hd\n", i);
            }
        }
    }

    return 0;
}
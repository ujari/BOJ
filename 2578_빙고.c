#include<stdio.h>

int bingo[25][25];
int bingoCou = 0;
void search(int i,int j)
{
	int sum = 0;
	if (i == j || (i == 2 && j == 2))//대각빙고
	{
		for (int ii = 0; ii < 5; ii++)
		{
			sum += bingo[ii][ii];
		}
		if (sum == 0)bingoCou++;
	}
	sum = 0;
	if (i + j == 4 || (i == 2 && j == 2)) 
	{	
		for (int ii = 0,jj=4; ii < 5; ii++,jj--)
		{
			sum += bingo[ii][jj];
		}
		if (sum == 0)bingoCou++;
	}
	sum = 0;
	//세로부터
	for (int row = 0; row < 5; row++)
	{
		sum += bingo[row][j];
	}
	if (sum == 0)bingoCou++;
	sum = 0;
	//가로
	for (int col = 0; col < 5; col++)
	{
		sum += bingo[i][col];
	}
	if (sum == 0)bingoCou++;

}

int main()
{

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &bingo[i][j]);
		}
	}

	int count= 0;
	int re;
	for (int k = 0; k < 25; k++) {
		int temp;
		scanf("%d", &temp);
		count++;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++)
			{
				if (bingo[i][j] == temp) {
					bingo[i][j] = 0;
					search(i, j);
					if (bingoCou >= 3)
					{
						printf("%d", count);
						return 0;
					}
				}

			}
		}
	}

}
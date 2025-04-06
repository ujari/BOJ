#include<stdio.h>

void printLine(int recurTime)
{
	for (int i = 0; i < recurTime; i++)
	{
		printf("_");
	}
	return;
}

void Print(int recurTime)
{
	printLine(recurTime);
	printf("\"����Լ��� ������?\"\n");
	printLine(recurTime);
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	printLine(recurTime);
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	printLine(recurTime);
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
}

void WhatIsRecursionFun(int time,int recurTime)
{
	if (time == 0)
	{
		printLine(recurTime);
		printf("\"����Լ��� ������?\"\n");
		printLine(recurTime);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		printLine(recurTime);
		printf("��� �亯�Ͽ���.\n");
		return;
	}
	Print(recurTime);
	WhatIsRecursionFun(time - 1,recurTime+4	);
	printLine(recurTime);
	printf("��� �亯�Ͽ���.\n");
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	WhatIsRecursionFun(n,0);
}
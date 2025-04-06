#include<stdio.h>
#include<string.h>

typedef struct st
{
	int top;
	int data[10000];
}st;

int empty(st* s)
{
	if (s->top == 0)return 1;
	else return 0;
}

void push(st* s, int data) {


	s->data[++s->top] = data;
}

int size(st* s)
{
	printf("%d\n", s->top);
	return s->top;
}

void pop(st* s)
{
	int data;
	if (empty(s))
	{
		printf("%d\n",-1);
	}
	else
	{
		data = s->data[s->top--];
		printf("%d\n", data);
	}

}

void top(st* s)
{
	if (empty(s))
	{
		printf("%d\n", -1);
	}
	else
	{
		printf("%d\n", s->data[s->top]);
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	st s;
	s.top = 0;
	for (int i = 0; i < t; i++)
	{
		char com[10];
		int data;
		scanf("%s", com);
		if (strcmp(com, "push") == 0)
		{
			scanf("%d", &data);
			push(&s, data);
		}
		else if (strcmp(com, "top") == 0)
		{
			top(&s)	;
		}
		else if (strcmp(com, "pop") == 0)
		{
			pop(&s);
		}
		else if (strcmp(com, "size") == 0)
		{
			size(&s);
		}
		else
		{
			printf("%d\n", empty(&s));
		}

	}
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX 10000

typedef int element;

typedef struct {
    int rear;
    int front;
    element data[MAX+1];
}queue;

void init(queue* q)
{
    q->front = -1;
    q->rear = -1;
}

int is_full(queue* q)
{
    if (q->rear == MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(queue* q, element item)
{
    if (!is_full(q))
    {
        q->data[++q->rear] = item;
    }
    else
    {

        return 0;
    }

}

int is_empty(queue* q)
{
    if (q->rear == q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

element pop(queue* q)
{
    if (!is_empty(q))
    {
        return q->data[++(q->front)];
    }
    else
    {
        return -1;
    }
}

int size(queue* q)
{
    return q->rear - q->front;
}

element front(queue q)
{
    if (!is_empty(&q))
    {
        return q.data[++(q.front)];
    }
    else
    {
        return -1;
    }
}

element back(queue q)
{
    if (!is_empty(&q))
    {
        return q.data[q.rear];
    }
    else
    {
        return -1;
    }
}

int main()
{
    queue q;
    init(&q);

    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char com[10];
        int data = -1;
        scanf("%s", com);

        if (strcmp(com, "push") == 0)
        {
            scanf("%d", &data);
            push(&q, data);
        }
        else if (strcmp(com, "pop") == 0)
        {
            printf("%d\n", pop(&q));
        }
        else if (strcmp(com, "size") == 0)
        {
            printf("%d\n", size(&q));
        }
        else if (strcmp(com, "empty") == 0)
        {
            printf("%d\n", is_empty(&q));
        }
        else if (strcmp(com, "front") == 0)
        {
            printf("%d\n", front(q));
        }
        else
        {
            printf("%d\n", back(q));
        }


    }

    return 0;

}


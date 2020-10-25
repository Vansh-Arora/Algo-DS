#include<iostream>

int queue[10];
int n = 10;
int front = -1;
int rear = -1;

int isEmpty()
{
    if(front == -1)
        return 1;
    else 
        return 0;
}

int isFull()
{
    if(rear == n-1)
        return 1;
    else
        return 0;
}

void enQueue(int data)
{
    if(isFull)
        printf("Queue full, can't insert.\n");
    else
    {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = data;
    }
}

void deQueue()
{
    if(isEmpty)
        printf("Queue Empty.\n");
    else
    {
        front++;
        if(front>rear)
            rear = front = -1;
    }
}

void display()
{
    if(isEmpty)
        printf("Queue Empty.\n");
    else
    {
        int i;
        for(i=front;i<=rear;i++)
            printf("%d ",queue[i]);
    }
}
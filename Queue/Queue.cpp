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
    if(isFull())
        printf("Queue full, can't insert.\n");
    else
    {
        if(front == -1)
            front = 0;
        queue[++rear] = data;
    }
}

void deQueue()
{
    if(isEmpty())
        printf("Queue Empty.\n");
    else
    {
        if(++front>rear)
            rear = front = -1;
    }
}

void display()
{
    if(isEmpty())
        printf("Queue Empty.\n");
    else
    {
        int i;
        for(i=front;i<=rear;i++)
            printf("%d ",queue[i]);
    }
}

int main()
{
while(true)
    {
        int input;
        printf("\n1: Press 1 to add in queue.\n");
        printf("2: Press 2 to delete element from queue.\n");
        printf("3: Press 3 to display queue.\n");
        printf("0: Press 0 to exit.\n");
        printf("Enter your choice: ");

        scanf("%d",&input);
        switch(input)
        {
            case 1:
                int data;
                printf("Enter data: ");
                scanf("%d",&data);
                enQueue(data);
                break;
            case 2:
                deQueue();
                break;
            case 3:
                display();
                break;
            case 0:
                return 0;
            default:
                printf("Invalid input!");
        }
    }   
}
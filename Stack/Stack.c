#include<stdio.h>

int stack[10];
int n = 10;
int top = -1;

int isEmpty()
{
    if(top == -1)
        return 1;
    return 0;
}

int isFull()
{
    if(top == n-1)
        return 1;
    return 0;
}

void display()
{
    if(isEmpty())
        printf("Stack is empty.\n");
    else
    {
        for(int i=0; i<=top; i++)
            printf("%d ", stack[i]);
    }
}

void push(int data)
{
    if(isFull())
        printf("Stack is full, can't insert.");
    else
        stack[++top] = data;
}

void pop()
{
    if(isEmpty())
        printf("Stack underflow.");
    else
        printf("Popped element %d\n",stack[top--]);
}

//int top()
//int size()

int main()
{
    while(true)
    {
        int input;
        printf("\n1: Press 1 to push.\n");
        printf("2: Press 2 to pop.\n");
        printf("3: Press 3 to display stack.\n");
        printf("0: Press 0 to exit.\n");
        printf("Enter your choice: ");

        scanf("%d",&input);
        switch(input)
        {
            case 1:
                int data;
                printf("Enter data: ");
                scanf("%d",&data);
                push(data);
                break;

            case 2:
                pop();
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
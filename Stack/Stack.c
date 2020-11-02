#include<stdio.h>
#include<limits.h>
int stack[10];
int n = 10;
int top = -1;

int isEmpty()
{
    return (top == -1);
}

int isFull()
{
    return (top == n-1);
}

void display()
{
    if(isEmpty())
        printf("Stack empty.\n");
    else
    {
        for(int i=0; i<=top; i++)
            printf("%d ", stack[i]);
    }
}

void push(int data)
{
    if(isFull())
        printf("Stack Overflow.\n");
    else
        stack[++top] = data;
}

int pop()
{
    if(isEmpty())
    {
        printf("Stack underflow.\n");
        return INT_MIN;
    }
    else
        return(stack[top--]);
}

int getTop()
{
    if(isEmpty()){
        printf("Stack empty.\n");
        return INT_MIN;}
    else
        return top;
}
//int size()

int main()
{
    int data;
    while(1)
    {
        int input;
        printf("\n1: Press 1 to push.\n");
        printf("2: Press 2 to pop.\n");
        printf("3: Press 3 to display stack.\n");
        printf("4: Press 4 to get top.\n");
        printf("0: Press 0 to exit.\n");
        printf("Enter your choice: ");

        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d",&data);
                push(data);
                break;

            case 2:
                printf("Popped element: %d\n",pop());                   
                break;

            case 3:
                display();
                break;

            case 4:
                if(!isEmpty())
                    printf("Top: %d",getTop());
                break;

            case 0:
                return 0;
                
            default:
                printf("Invalid input!\n");
        }
    }   
}
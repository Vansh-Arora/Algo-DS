#include<iostream.h>

int stack[10];
int n = 10;
int top = -1;

int isEmpty()
{
    if(top == -1)
        return 1;
    else 
        return 0;
}

int isFull()
{
    if(top == n-1)
        return 1;
    else
        return 0;
}

void display()
{
    int i;
    for(i=0; i<=top; i++)
        printf("%d ", stack[i]);
}

int push(int data)
{
    if(isFull())
        printf("Stack is full, can't insert.");
    else
    {
        top += 1;
        stack[top] = data;
    }
}

void pop()
{
    if(isEmpty())
        printf("Stack is already empty.");
    else
    {
        int data;
        data = stack[top];
        top -= 1;
        return data;
    }
}

int main()
{
    int input;
    printf("1: Press 1 to push.\n");
    printf("2: Press 2 to pop.\n");
    printf("3: Press 3 to display stack.\n");
    printf("0: Press 0 to exit.");
    
}
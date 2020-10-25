#include<iostream>

int queue[10];
int n = 10;
int front = -1;
int rear = -1;

int isEmpty()
{
    if(rear == front)
        return 1;
    else 
        return 0;
}

int isFull()
{
    if(front == n-1)
        return 1;
    else
        return 0;
}
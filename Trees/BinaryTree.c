#include<stdio.h>

struct node
{
    int data;
    struct node *lptr;
    struct node *rptr;
}

struct node* newNode()
{
    struct node* new = (struct node*)malloc(sizeOf(struct node));
    new->lptr = NULL;
    new->rptr = NULL;
    int data;
    printf("\nEnter data for node: ");
    scanf("%d",&data);
    new->data = data;
}
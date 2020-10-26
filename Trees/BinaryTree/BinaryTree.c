#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lptr;
    struct node *rptr;
};

struct node* newNode()
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->lptr = NULL;
    new->rptr = NULL;
    int data;
    printf("\nEnter data for node: ");
    scanf("%d",&data);
    new->data = data;
}

int main()
{
    struct node* root = newNode();
    root->lptr=newNode();
    root->rptr=newNode();
    printf("%d\n",root->data);
    printf("%d  ",root->lptr->data);
    printf("%d",root->rptr->data);
    return 0;
}
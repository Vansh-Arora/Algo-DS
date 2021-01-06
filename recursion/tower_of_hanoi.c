#include<stdio.h>

int move(int discs,char src,char dest,char aux)
{
    if(discs == 1)
    {
        printf("Move %d from %c to %c.\n",discs,src,dest);
        return 0;
    }
    else
    {
        move(discs-1,src,aux,dest);
        printf("Move %d from %c to %c.\n",discs,src,dest);
        move(discs-1,aux,dest,src);
    }
}
int main()
{
    int discs;
    printf("Enter number of discs.\n");
    scanf("%d",&discs);
    /* A: source
       B: destination
       C: auxillary
    */
    move(discs,'A','B','C');
    return 0;
}
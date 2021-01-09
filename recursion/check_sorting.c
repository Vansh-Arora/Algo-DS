#include<stdio.h>

int check(int arr[],int n)
{
    if(n==1)
        return 1;
    else
        return arr[n-1]>arr[n-2]?0:check(arr,n-1);
}

int main()
{
    int arr[] = {5,4,7,2,1,0};
    int sorted = check(arr,6);
    if(sorted)
        printf("Sorted");
    else
        printf("Not Sorted");
    return 0;
}
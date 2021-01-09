#include<stdio.h>

void binary(char str[],int n)
{
    if(n<1)
    {
        printf("%s\n",str);
    }
    else
    {
        str[n-1] = '0';
        binary(str,n-1);
        str[n-1] = '1';
        binary(str,n-1);

    }
}
int main()
{
    int i;
    char a[3];
    binary(a,3);
    return 0;
}
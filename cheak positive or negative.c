#include<stdio.h>
int main()
{
    int n;
    printf("Enter a num for cheaking positive or negative:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Enter %d number is positive",n);
    }
    else if(n<0)
    {
        printf("Enter %d number is negative",n);
    }
    else
    {
        printf("Enter %d nunber is nutral",n);
    }
    return 0;
}

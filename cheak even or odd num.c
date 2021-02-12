#include<stdio.h>
int main()
{
    int n;
    printf("Enter a num for cheaking even or odd:");
    scanf("%d",&n);
    if(n%2!=0)          /*if(n%2==0)~~even
                             else~~~~~odd*/
    {

        printf("Enter %d number is odd",n);
    }

    else
    {
        printf("Enter %d nunber is even",n);
    }
    return 0;
}

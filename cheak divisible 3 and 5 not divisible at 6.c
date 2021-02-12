#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number for cheaking diviible at 3&5 and not divisible at 6:");
    scanf("%d",&n);
    if(n%3==0&&n%5==0&&n%6!=0)
    {
        printf("enter %d number is divisible",n);

    }
    else
    {
        printf("enter %d number isn`t divisible",n);
    }
}

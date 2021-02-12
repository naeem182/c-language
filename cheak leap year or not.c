#include<stdio.h>
int main()
{
    int n;
    printf("Enter a year and cheak leap year or not:");
    scanf("%d",&n);
    if((n%4==0&&n%100!=0)||(n%400==0))
    {
        printf("Enter %d year is a leap year",n);

    }
    else
    {
        printf("Enter %d year is not a leap year",n);
    }
}

/*/cheak a year leap year or not
#include<stdio.h>
int main()
{
   int y;
   printf("given a year :");
   scanf("%d",&y);
   if((y%4==0&&y%100!=0)||(y%400==0))
        {
            printf("the year %d is a leap year",y);

        }
   else
        {
            printf("the year %d is not a leap year",y);
        }

}
*/
//divisible in number 2&5 and not dividible in 7
#include<stdio.h>
int main()
{
    int n;
    printf("enter a num:");
    scanf("%d",&n);
   {
       if(n>0)
            printf("%d numis positive",n);
        else if(n<0)
              printf("%d numis negative",n);
        else
            printf("num is nutral");
   }


    if(n%2==0&&n%5==0&&n%7!=0)
        printf("\n %d num is divisible with 2&5 AND NOT DIVISIBLE IN 7",n);
    else
          printf("\n not matched in %d num is divisible with 2&5 AND NOT DIVISIBLE IN 7",n);
}

//

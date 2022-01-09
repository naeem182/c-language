#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
           c++;
           break;
        }
    }
   if(n==1)
       printf("1 is neither prime nor composite",n);
    else if(c==0)
        printf("%d is  a prime number",n);
    else
       printf("%d is not a prime number",n);

return 0;
}

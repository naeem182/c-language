
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter even series last num:");
    scanf("%d",&n);
    printf("\nprint 1 to %d even num:\n",n);
    SSfor(i=1;i<=n;i++)//for(i=2;i<=n;i+2)
    {
        if(i%2==0)
        {
           printf("%d\t",i);
         }
    }

}

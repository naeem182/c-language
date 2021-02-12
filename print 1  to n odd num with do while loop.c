#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter odd series last num:");
    scanf("%d",&n);
    printf("\nprint 1 to %d odd num:\n",n);
    i=1;
    do
    {
        if(i%2!=0)
         {
           printf("%d\t",i);
         }
        i++;
    }
    while(i<=n);
}

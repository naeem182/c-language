#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter last digite:");
    scanf("%d",&n);
    printf("\nprint 1 to %d  series of 5 divisible num:\n",n);
    /*  for(i=1;i<=n;i++)
    {
        printf("%d\t",i*5);
  }*/
   for(i=1;i<=n;++i)
    {
        if(i%5==0)
         {

          printf("%d\t",i);
          }
    }

}

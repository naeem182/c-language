#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number:");
    scanf("%d%d%d",&a,&b,&c);
   {
       if(a>b&&a>c)
        printf("%d is max",a);
    else if(b>c)
         printf("%d is max",b);
    else
         printf("%d is max",c);
    }
     {
       if(a<b&&a<c)
        printf("\n%d is min",a);
    else if(b<c)
         printf("\n%d is min",b);
    else
         printf("\n%d is min",c);
    }
}



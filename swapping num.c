#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("enter two num:");
    scanf("%d%d",&x,&y);
    printf("Before swapping: \nx=%d   y=%d\n",x,y);
   temp=x;
   x=y;
   y=temp;
   printf("After swapping:\nx=%d   y=%d",x,y);
   return 0;
}

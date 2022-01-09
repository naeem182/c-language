#include <stdio.h>
int main()
{
    int  a,b,left_shift,right_shift;
        printf("left shift and right shift input\n");
        scanf("%d%d",&a,&b);
        left_shift=a<<b;
        right_shift=a>>b;
        printf("left shift result :%d\n",left_shift);
          printf("right shift result :%d\n",right_shift);
}

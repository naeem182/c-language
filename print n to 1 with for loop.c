#include<stdio.h>
int main()
{
    int i,n;
    printf("Ener  first n digit:");
    scanf("%d",&n);
    printf(" print %d to 1\n",n);
    for(i=n;i>=1;i--)
    {
        printf("%d\t",i);
    }
    return 0;
}

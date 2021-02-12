
#include<stdio.h>
int main()
{
    int f,k;
    printf("Enter a farenhait value:");
    scanf("%d",&f);
    k=5*(f-32)/9+273;
    printf("farenhait %d 's kalvin value is:%.2d",f,k);
    return 0;

}


#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three num and cheak minimum value:");
    scanf("%d%d%d",&a,&b,&c);
    if((a<b)&&(a<c))
        printf("%d is less than %d and %d",a,b,c);
    else if((b<a)&&(b<c))
         printf("%d is less than %d and %d",b,a,c);
    else
         printf("%d is less than %d and %d",c,a,b);
    getch();

}

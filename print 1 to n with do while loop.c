#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Ener last digit:");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("%d\t",i);
        i++;
    }
    while(i<=n);

    return 0;
    getch();
}

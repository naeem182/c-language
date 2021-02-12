#include<stdio.h>
#include<conio.h>
int main()
{

    float a,b,sum,sub1,sub2,mul,div;

    printf("enter any two num\n");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("the sum of %.2f  and %.2f is %.2f\n",a,b,sum);
    if(a>b)
    {
        sub1=a-b;
        printf("the sub of %.2f  and %.2f is %.2f\n",a,b,sub1);

    }
    else
    {
        sub2=b-a;
        printf("the sub of %.2f  and %.2f is %.2f\n",b,a,sub2);
    }
    if(b!=0)
    {
        mul=a*b;
        div=a/b;

        printf("the mul of %.2f  and %.2f is %.2f\n",a,b,mul);
        printf("the div of %.2f  and %.2f is %.2f\n",a,b,div);

    }
    else
    {
        printf("div is impossible\n mul is 0\n");

    }

    return 0;

}


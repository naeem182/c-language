/*
//1.sum of natural number
#include<stdio.h>
int sum(int n)
{
    if(n==0||n==1)
        return n;
    else
        return n+sum(n-1);
}
int main()
{
    int n;
    printf("enter last digit of the num;");
    scanf("%d",&n);
    printf("sum of the natural num to %d :%d",n,sum(n));
}

//2.sum of natural number 1to n
#include<stdio.h>
int sum(int i,int n)
{
    if(i==n)
        return i;
    else
        return i+sum(i+1,n);
}
int main()
{
    int i=1,n;
    printf("enter last digit of the num;");
    scanf("%d",&n);
    printf("sum of the natural num 1 to %d :%d",n,sum(i,n));
}


//3.find a number factorial
#include<stdio.h>
int fac(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*fac(n-1);
}
int main()
{
    int n;
    printf("enter a num;");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fac(n));
}

//4.fibonacci series
#include<stdio.h>
int fibo(int i)
{
    if(i==0||i==1)
        return i;
    else
        return fibo(i-1)+fibo(i-2);
}
int main()
{
    int i,n;
    printf("enter last digit of the term;");
    scanf("%d",&n);
    printf("fibonacci series:");
    for(i=0;i<n;i++)
     {printf("  %d\t",fibo(i));}
}
*/

//5.find n^th num fibonacci series
#include<stdio.h>
#include<math.h>
int fibo(int i)
{
    if(i==0||i==1)
        return i-1;
    else
        return fibo(i-1)+fibo(i-2);
}
int main()
{
    int i,n;
    printf("enter the term;");
    scanf("%d",&n);
    printf("fibonacci series:");
  //  for(i=0;i<n;i++)
     {printf("  %d\t",abs(fibo(n)));}
}

/*1.print 1 to n
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter last num:");
    scanf("%d",&n);
    printf("1 to %d\n",n);
    for(i=1;i<=n;++i)
    {
        printf("%d\t",i);
    }
}

//2..print n to 1
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter last num:");
    scanf("%d",&n);
    printf("%d to 1\n",n);
    for(i=n;i>=1;i--)
    {
        printf("%d\t",i);
    }
}

//3..print a to z
#include<stdio.h>
int main()
{
    char i;
    printf("a to z\n");
    for(i='a';i<='z';i++)
    {
        printf("%c\t",i);
    }
}

//4.print 1 to n odd num
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter last num:");
    scanf("%d",&n);
    printf("1 to %d odd num \n",n);
    for(i=1;i<=n;++i)
    {
        if(i%2!=0)
        printf("%d\n",i);
    }
}

//5.print 1 to n even num
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter last num:");
    scanf("%d",&n);
    printf("1 to %d even num \n",n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
}

//6.print 5's divisible num
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter last num:");
    scanf("%d",&n);
    printf("1 to %d 5's divisible num \n",n);
    for(i=1;i<=n;++i)
    {
        if(i%5==0)
        printf("%d\n",i);
    }
}

//7.print 5's multiplication table
#include<stdio.h>
int main()
{
    int i,n;
    printf("how long you took multiplies:");
    scanf("%d",&n);
    printf("1 to %d 5's multiplication table \n",n);
    for(i=1;i<=n;++i)
    {

        printf("%d*%d=%d\n",5,i,5*i);
    }
}


//8.sum 1+2+3+4....+n series
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter last num of the series:");
    scanf("%d",&n);
    printf("sum of 1+2+3+4....+%d : ",n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    printf("%d\n",sum);
}

//9.sum 1+3+5+7....+n series
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter last num of the series:");
    scanf("%d",&n);
    printf("sum of 1+3+5+7....+%d : ",n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
         {
            sum=sum+i;

         }
       //  printf("\n%d\n",sum);
    }
 printf("%d\n",sum);
}
//10.sum 2+4+6....+n series
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter last num of the series:");
    scanf("%d",&n);
    printf("sum of 2+4+6....+%d : ",n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
         {
            sum=sum+i;

         }
       //  printf("\n%d\n",sum);
    }
 printf("%d\n",sum);
}

//11.sum 1*2*3*4....*n series
#include<stdio.h>
int main()
{
    int i,n;
    double sum=1;
    printf("enter last num of the series:");
    scanf("%d",&n);
    printf("sum of 1*2*3*4....*%d : ",n);
    for(i=1;i<=n;i++)
    {

            sum=sum*i;


       //  printf("\n%d\n",sum);
    }
 printf("%f\n",sum);
}

//12.sum 2*4*6....*n series
#include<stdio.h>
int main()
{
    int i,n;
    double sum=1;
    printf("enter last num of the series:");
    scanf("%d",&n);
    printf("sum of 2*4*6....*%d : ",n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
         {
            sum=sum*i;

         }
       //  printf("\n%d\n",sum);
    }
 printf("%lf\n",sum);
}

//13.sum 1^3*2^3*3^3*4^3....*n^3 series
#include<stdio.h>
int main()
{
    int i,n;
    double sum=1;
    printf("enter last num of the series:");
    scanf("%d",&n);
    printf("1^3*2^3*3^3*4^3....*%d^3 : ",n);
    for(i=1;i<=n;i++)
    {

            sum=sum*pow(i,3);


       //  printf("\n%d\n",sum);
    }
 printf("%lf\n",sum);
}
*/

//14.sum 1/2^2*1/3^2*1/4^2....*1/n^2 series
#include<stdio.h>
int main()
{
    int i,n;
    double sum=1;
    printf("enter last num of the series:");
    scanf("%d",&n);
    printf("1/2^2*1/3^2*1/4^2....*1/%d^2: ",n);
    for(i=1;i<=n;i++)
    {

         //   sum=sum*(1/pow(i+1,2));
              sum=sum*pow(i+1,-2);


       //  printf("\n%d\n",sum);
    }
 printf("%f\n",sum);
}

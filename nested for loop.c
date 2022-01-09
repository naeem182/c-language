/*//1.1 to n'th number multiplication table
#include<stdio.h>
int main()
{
   int i,j,n;
   printf("how do you look the multiplication table?\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=0;j<=10;j++)
        printf("%d*%d=%d\n",i,j,i*j);
       printf("\n\n\n");
   }
   // printf("\n\n\n");
}
/*2.print
11 12
21 22
31 32
41 42
51 52


#include<stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=2;j++)
        printf("%d%d\t",i,j);
       printf("\n");
   }
   // printf("\n\n\n");
}

*/
/*3.print
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


#include<stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=i;j++)
        printf("%d\t",j);
       printf("\n");
   }
  // printf("\n");
}

/4.print
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

#include<stdio.h>
int main()
{
   int i,j;
   for(i=5;i>=1;i--)
   {
       for(j=i;j>=1;j--)
        printf("%d\t",j);
       printf("\n");
   }
  // printf("\n");
}

/5.print
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*
#include<stdio.h>
int main()
{
   int i,j;
   for(i=5;i>=1;i--)
   {
       for(j=i;j>=1;j--)
        printf("%d\t",i);
       printf("\n");
   }
  // printf("\n");
}
/6.print
1
1 3
1 3 6
1 3 6 10
1 3 6 10 15
*/
#include<stdio.h>
int main()
{
   int i,j,sum=0;
   for(i=1;i<=5;i++)
   {
       sum=0;
       for(j=1;j<=i;j++)
       {

            sum=sum+j;
            printf("%d\t",sum);

       }
       printf("\n");
   }
  // printf("\n");
}

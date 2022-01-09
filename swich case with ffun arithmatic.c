#include<stdio.h>
#include<conio.h>
int addition()
{ int a,b;
    printf("enter two num:\n");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    printf("addition result=%d\n",sum);

     choice();

}
int subtraction()
{ int c,d;
    printf("enter two num:\n");
    scanf("%d%d",&c,&d);

    int sub=c-d;
    printf("subtraction result=%d\n",sub);
     choice();
}
int multiplicatin()
{
    int e,f;
    printf("enter two num:\n");
    scanf("%d%d",&e,&f);

    int mul=e*f;
    printf("multiplication result=%d\n",mul);
     choice();
}
int division()
{ int g,h;
    printf("enter two num:\n");
    scanf("%d%d",&g,&h);

    int div=g/h;
    printf("division result=%d\n",div);
     choice();
}

int choice()
{
    printf("FOR..............\n");
printf("\t1.addition\n");
printf("\t2.subtraction\n");
printf("\t3.multiplicatin\n");
printf("\t4.division\n");
printf("\t5.no calculate\n");
  int calculate;

printf("enter num that you want to calculate\n");
scanf("%d",&calculate);
switch(calculate)
{
case 1:
    printf("addition\n");
    addition();

    break;

case 2:
    printf("subtraction\n");
    subtraction();


    break;
case 3:
    printf("multiplicatin\n");
    multiplicatin();

    break;
case 4:
    printf("division\n");
    division();


    break;
case 5:



    printf("exit:\n");

    break;
default:
    printf("wrong input");
    choice();
    break;
}

getch();

    return 0;

}
int main()
{ choice();

}


/*c program
to find sum of two num*/
#include<stdio.h>               //header file
int main()                      //main funtion
{
    int a,b;
    float sum,avg;                   //get varriable
    printf("Enter two num\n");
    scanf("%d%d",&a,&b);           //input two num from user
    sum=a+b;                     //method prosses
    avg=sum/2;
    /*print the value of su*/
    printf("%d and %d are makes %.2f\nand avarage is %.2f",a,b,sum,avg);
    return 0;

}

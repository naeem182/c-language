#include<stdio.h>
int main()
{
    char i,j;

     printf("print uppercase alphabet:\n");
     for(i='A';i<='Z';i++)
     {
          printf("%c\t",i);
     }

    printf("\nprint lowercase alphabet:\n");
    j='a';
    while(j<='z')
    {
        printf("%c\t",j);
        j++;
    }



}

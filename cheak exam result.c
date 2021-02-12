#include<stdio.h>
#include<conio.h>
int main()
{
    float num;
    printf("Enter your num:");
    scanf("%f",&num);
    if(num>=40)
    {
        printf("you are passed\n");
            if(num>=80&&num<=100)
                printf("your grade is A+");
            if(num>=71&&num<=79)
            printf("your grade is A");
            if(num>=61&&nnum<=70)
            printf("you grade is A-");
            if(num>=51&&num<=60)
            printf("your grade is B");
            if(num>=41&&num<=50)
            printf("your grade is C");
    }
    else

        printf("you  are failed");
    getch ();
}

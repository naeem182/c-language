#include<stdio.h>
int main()
{

    char cha;
    printf("Enter a charechter and cheak vowel&consonant&positive&negative:");
    scanf("%c",&cha);
if((cha>='a'&&cha<='z')||(cha<='A'&&cha>='Z'))
        {
            printf("it`s a charecter\n");
            if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u'||cha=='A'||cha=='E'||cha=='I'||cha=='O'||cha=='U')
            {
               printf("charecter is a vowel");

            }
            else
            {
                 printf("charecter is a consonant");
            }
        }
 else if((cha>='0')&&(cha<='9')||(cha<='0'))//&&(cha>='-9'))
    {
        printf("it`s a num\n");
        if(cha>'0')
        {
             printf("Number is a positive");
        }
       else if(cha<'0')
        {
             printf("Number is a negative");
        }
        else
        {printf("nunber is nutral");

        }
    }
else
    {
        printf("it`s a special type charecter");
    }

}

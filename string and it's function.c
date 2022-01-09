l,/*//1.print NAEEM
#include<stdio.h>
int main()
{
    char s[6];
        s[0]='N';
        s[1]='A';
        s[2]='E';
         s[3]='E';
        s[4]='M';
        s[5]='\0';
        printf("NAME:%s",s);
}

//2.print NAEEM take input and display output
#include<stdio.h>
int main()
{
    char s[6];
        printf("take a string input:");
        gets(s);
        printf("NAME:%s",s);
}

//3. display string characterwise
#include<stdio.h>
int main()
{
    char s[]="naeem islam";
        for(int i=0;s[i]!='\0';i++)
            printf("%c\n",s[i]);
}

//4find lenght of string using strlen() string function
#include<stdio.h>
int main()
{
    char s1[]="naeem islam";
        int lenght=strlen(s1);
            printf("[%s] string lenght:%d\n",s1,lenght);
}

//5.find lenght of string using without strlen() string function
#include<stdio.h>
int main()
{
    char s1[]="naeem islam";
        int i=0,len=0;
    for(i;s1[i]!='\0';i++)
        {
            len++;
        }
    printf("[%s] string lenght:%d\n",s1,len);

}

//6,fcopy a string using strcpy() string function
#include<stdio.h>
int main()
{
    char base[]="naeem islam";
    char copy[20];
        strcpy(copy,base);
        printf("base string:%s\n",base);
            printf(" bas to copyed string:%s\n",copy);
}

//7.concat string using  strcat() string function
#include<stdio.h>
int main()
{
     char s1[]="my name is";
    char s2[]=" naeem islam";
        strcat(s1,s2);


    printf("string concat :%s\n",s1);

}
*/
//8.concat string using without strcat() string function
#include<stdio.h>
int main()
{
     char s1[]="my name is";
    char s2[]="naeem islam";
       static i=0;                                                                                                      int i=0;
        int j=0,len=0;
)
    {

        i++;

    };

j=0;
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];

        j++;
        i++;

    }
    s1[i]='\0';
    printf("string concat :\n");
    puts(s1);

}


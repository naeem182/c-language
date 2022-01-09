#include<stdio.h>
main()
{int i=4,j;
printf("input of postfix:");
 scanf("%d",&i);
j=i++;
printf("postfix:\ni=%d\tj=%d\n",i,j);
printf("input of prefix:");
scanf("%d",&i);
j=++i;
printf("prefix:\ni=%d\tj=%d",i,j);

}

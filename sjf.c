//using selection  soort
/*#include<stdio.h>
 int main()
{
    int bt[20],p[20],wt[20],tat[20],
    i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("\nEnter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
   //sorting of burst times with selection sort
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        total+=wt[i];
    }
    avg_wt=(float)total/n;
    total=0;
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
    avg_tat=(float)total/n;
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f\n",avg_tat);
     printf("\n");
    printf("\nThe grand chart : \n");
    printf("|   ");
    for (i = 0; i < n; i++)
    {
        printf("P%d   |   ",p[i]);
    }
    printf("\n0\t ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t  ",wt[i]+bt[i]);
    }
    printf("\n");
    return 0;
}*/
//using babble sort
#include<stdio.h>
#include<conio.h>
#define max 30
void main()
{
   int i,j,n,t,p[max],bt[max],wt[max],tat[max];
   float awt=0,atat=0;
   //clrscr();
   printf("Enter the number of process:");
   scanf("%d",&n);
   /*printf("Enter the process number");
   for(i=0;i<n;i++)
   {
       scanf("%d",&p[i]);

   }*/
   printf("Enter the burst time of the process:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&bt[i]);
   }
   //Applyling bubble sort here to sort according their burst time
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(bt[j]>bt[j+1])
            {
                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;

                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;

            }
        }
    }
    printf("Process \t   burst time \t waiting time \t turn around time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t\t\t %d\t\t %d\t\t %d\n",p[i],bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("Average waiting time=%f\n",awt);
    printf("Average turn around time=%f\n",atat);
    printf("\n");
    printf("\nThe grand chart : \n");
    printf("|   ");
    for (i = 0; i < n; i++)
    {
        printf("P%d   |   ",p[i]);
    }
    printf("\n0\t ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t  ",wt[i]+bt[i]);
    }
    printf("\n");
    return 0;
    getch();


}


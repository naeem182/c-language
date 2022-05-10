
#include <stdio.h>
int main(){
    int n, i, j, b[10], w[10], t[10], arrival_time[10], sum_w = 0, sum_t = 0;
    double avg_w, avg_t;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("CPU/Burst time of P %d is :",i+1);
        scanf("%d",&b[i]);

        printf("Arrival time of P  %d  is :",i+1);
        scanf("%d",&arrival_time[i]);
        printf("\n");
    }
    w[0] = 0;
    for (i = 1; i < n; i++)
    {
        w[i] = w[i - 1] + b[i - 1];
    }
    for (i = 0; i < n; i++)
    {
        w[i] -= arrival_time[i];
    }
    for (i = 0; i < n; i++)
    {
        t[i] = w[i] + b[i];
    }
    printf("Process\t   CPU time\tWaiting time\tTurn Around Time");
    for (i = 0; i < n; i++)
    {
        printf("\nP%d\t   %d\t\t%d\t\t%d",i+1,b[i],w[i],t[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        sum_w += w[i];
        sum_t += t[i];
    }
    avg_w = (double) sum_w / n;
    avg_t = (double) sum_t / n;
    printf("\nAverage waiting time: %lf",avg_w);
    printf("\nAverage Turnaround time: %lf",avg_t);
    printf("\n");
    printf("\nThe grand chart : \n");
    printf("|   ");
    for (i = 0; i < n; i++)
    {
        printf("P%d   |   ",i+1);
    }
    printf("\n0\t ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t  ",t[i]+arrival_time[i]);
    }printf("\n");
    return 0;
}


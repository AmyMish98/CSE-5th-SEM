#include <stdio.h>
#include <stdlib.h>

#define MAX_PROCESS 100

struct process {
    int pid;
    int burst_time;
    int waiting_time;
};

typedef struct process Process;


double average_waiting_time;
int total_waiting_time;

void sort_process_by_burst_time(Process p[], int n);
void calculate_waiting_time(Process p[], int n);

int main()
{
    Process p[MAX_PROCESS];
    int n, i, j;
    puts("SHORTEST JOB FIRST SCHEDULING ALGORITHM \n");

    printf("\n Enter total process: ");
    scanf("%d", &n);
    printf("\n Enter burst time for each process:\n");
    for(i=0; i<n; i++) {
        printf("P[%d]: ", i+1);
        scanf("%d", &p[i].burst_time);
        p[i].pid = i+1;
    }

    sort_process_by_burst_time(p, n);
    calculate_waiting_time(p, n);
    average_waiting_time = (double) ( (double)total_waiting_time / (double) n );
    
    printf("\n Average Waiting Time: %.2lf\n",average_waiting_time);

    return 0;
}

void sort_process_by_burst_time(Process p[], int n)
{
    int i, j;
    Process temp;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-1-i; j++) {
            if(p[j].burst_time > p[j+1].burst_time) {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}

void calculate_waiting_time(Process p[], int n)
{
    int i;
    total_waiting_time = 0;
    p[0].waiting_time = 0;
    for(i=1; i<n; i++) {
        p[i].waiting_time = p[i-1].waiting_time + p[i-1].burst_time;
        total_waiting_time += p[i].waiting_time;
    }
}

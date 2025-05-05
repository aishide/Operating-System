#include <stdio.h>

struct Process {
    int pid;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int priority;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

int main() {
    int n, t = 0, completed = 0, i, min_priority, current = -1;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    for (i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Process P%d arrival time: ", p[i].pid);
        scanf("%d", &p[i].arrival_time);
        printf("Process P%d burst time: ", p[i].pid);
        scanf("%d", &p[i].burst_time);
        printf("Process P%d priority (lower = higher priority): ", p[i].pid);
        scanf("%d", &p[i].priority);
        p[i].remaining_time = p[i].burst_time;
    }

    printf("\nGantt Chart:\n");

    while (completed != n) {
        min_priority = 9999;
        current = -1;

        for (i = 0; i < n; i++) {
            if (p[i].arrival_time <= t && p[i].remaining_time > 0 && p[i].priority < min_priority) {
                min_priority = p[i].priority;
                current = i;
            }
        }

        if (current != -1) {
            printf(" P%d ", p[current].pid);
            p[current].remaining_time--;
            if (p[current].remaining_time == 0) {
                completed++;
                p[current].completion_time = t + 1;
                p[current].turnaround_time = p[current].completion_time - p[current].arrival_time;
                p[current].waiting_time = p[current].turnaround_time - p[current].burst_time;
            }
        } else {
            printf(" idle ");
        }
        t++;
    }

    printf("\n\nPID\tAT\tBT\tPR\tCT\tTAT\tWT\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].arrival_time,
               p[i].burst_time, p[i].priority, p[i].completion_time,
               p[i].turnaround_time, p[i].waiting_time);
    }

    return 0;
}

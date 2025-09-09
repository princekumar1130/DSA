#include<stdio.h>



struct Process {
    int pid, burst_time, priority;
};

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];
    for (int i = 0; i < n; i++) {
        printf("Enter process %d details:\n", i + 1);
        p[i].pid = i + 1;
        printf("Priority: ");
        scanf("%d", &p[i].priority);
        printf("Burst Time: ");
        scanf("%d", &p[i].burst_time);
    }

    // Sort by priority
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].priority > p[j + 1].priority) {
                struct Process temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    printf("Process\tPriority\tBurst Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\n", p[i].pid, p[i].priority, p[i].burst_time);
    }

    return 0;
}

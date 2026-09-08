#include <stdio.h>

#define MAX 20

void roundRobin(int n, int bt[], int quantum) {
  int rem_bt[MAX];
  int wt[MAX], tat[MAX];
  int time = 0;
  int done;

  float avg_wt = 0;
  float avg_tat = 0;

  for (int i = 0; i < n; i++) {
    rem_bt[i] = bt[i];
    wt[i] = 0;
  }

  do {
    done = 1;

    for (int i = 0; i < n; i++) {
      if (rem_bt[i] > 0) {
        done = 0;

        if (rem_bt[i] > quantum) {
          printf("P%d executes from %d to %d\n", i + 1, time, time + quantum);

          time += quantum;
          rem_bt[i] -= quantum;
        } else {
          printf("P%d executes from %d to %d\n", i + 1, time, time + rem_bt[i]);

          time += rem_bt[i];

          wt[i] = time - bt[i];

          rem_bt[i] = 0;
        }
      }
    }

  } while (done == 0);

  printf("\nRound Robin Scheduling\n");

  printf("\nProcess\tBT\tWT\tTAT\n");

  for (int i = 0; i < n; i++) {
    tat[i] = bt[i] + wt[i];

    avg_wt += wt[i];
    avg_tat += tat[i];

    printf("P%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);
  }

  avg_wt = avg_wt / n;
  avg_tat = avg_tat / n;

  printf("\nAverage Waiting Time = %.2f", avg_wt);
  printf("\nAverage Turnaround Time = %.2f\n", avg_tat);
}

void priorityScheduling(int n, int bt[], int priority[]) {
  int p[MAX];
  int temp;
  int wt[MAX], tat[MAX];

  float avg_wt = 0;
  float avg_tat = 0;

  for (int i = 0; i < n; i++) {
    p[i] = i + 1;
  }

  /* Sort according to priority */

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (priority[i] > priority[j]) {
        temp = priority[i];
        priority[i] = priority[j];
        priority[j] = temp;

        temp = bt[i];
        bt[i] = bt[j];
        bt[j] = temp;

        temp = p[i];
        p[i] = p[j];
        p[j] = temp;
      }
    }
  }

  wt[0] = 0;

  for (int i = 1; i < n; i++) {
    wt[i] = 0;

    for (int j = 0; j < i; j++) {
      wt[i] += bt[j];
    }
  }

  printf("\nPriority Scheduling\n");

  printf("\nExecution Order: ");

  for (int i = 0; i < n; i++) {
    printf("P%d ", p[i]);
  }

  printf("\n\nProcess\tBT\tPriority\tWT\tTAT\n");

  for (int i = 0; i < n; i++) {
    tat[i] = bt[i] + wt[i];

    avg_wt += wt[i];
    avg_tat += tat[i];

    printf("P%d\t%d\t%d\t\t%d\t%d\n", p[i], bt[i], priority[i], wt[i], tat[i]);
  }

  avg_wt = avg_wt / n;
  avg_tat = avg_tat / n;

  printf("\nAverage Waiting Time = %.2f", avg_wt);
  printf("\nAverage Turnaround Time = %.2f\n", avg_tat);
}

int main() {
  int n;
  int bt[MAX];
  int priority[MAX];
  int quantum;

  printf("Enter number of processes: ");
  scanf("%d", &n);

  printf("\nEnter Burst Time and Priority\n");

  for (int i = 0; i < n; i++) {
    printf("\nProcess P%d\n", i + 1);

    printf("Burst Time: ");
    scanf("%d", &bt[i]);

    printf("Priority: ");
    scanf("%d", &priority[i]);
  }

  printf("\nEnter Time Quantum for Round Robin: ");
  scanf("%d", &quantum);

  int bt_rr[MAX];
  int bt_pr[MAX];
  int pr[MAX];

  for (int i = 0; i < n; i++) {
    bt_rr[i] = bt[i];
    bt_pr[i] = bt[i];
    pr[i] = priority[i];
  }

  printf("\n==============================\n");
  printf("ROUND ROBIN SCHEDULING\n");
  printf("==============================\n");

  roundRobin(n, bt_rr, quantum);

  printf("\n==============================\n");
  printf("PRIORITY SCHEDULING\n");
  printf("==============================\n");

  priorityScheduling(n, bt_pr, pr);

  return 0;
}

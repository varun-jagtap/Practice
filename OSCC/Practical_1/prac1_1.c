#include <stdio.h>
#include <unistd.h>

int main() {
  pid_t pid;

  pid = fork();

  if (pid == 0) {
    printf("\nChild Process");
    printf("\nChild PID : %d", getpid());
    printf("\nParent PID : %d", getppid());
  } else {
    printf("\nParent Process");
    printf("\nParent PID : %d", getpid());
    printf("\nChild PID : %d", pid);
  }

  return 0;
}

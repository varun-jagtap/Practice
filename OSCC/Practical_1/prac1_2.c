#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  pid_t pid;

  pid = fork();

  if (pid == 0) {
    printf("\nChild executing ls command...\n");

    execl("/bin/ls", "ls", NULL);

    exit(0);
  }

  else {
    wait(NULL);
    printf("\nParent Process Resumed\n");
  }
  return 0;
}

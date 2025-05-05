#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    pid = fork(); // create a child process

    if (pid < 0) {
        // Fork failed
        printf("Fork failed.\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("Hello from the Child process! PID: %d\n", getpid());
    } else {
        // Parent process
        printf("Hello from the Parent process! PID: %d, Child PID: %d\n", getpid(), pid);
    }

    return 0;
}
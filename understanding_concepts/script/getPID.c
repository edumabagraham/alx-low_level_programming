#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 * This retrieves the id of the current
 * process and the parent process
 * Return: Always 0
 */

int main(void)
{
    pid_t my_pid;
    pid_t parent_pid;

    my_pid = getpid();
    parent_pid = getppid();
    printf("%u\n%u",my_pid,parent_pid);

    return (0);
}
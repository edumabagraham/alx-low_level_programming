#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t my_pid;
    pid_t child_pid;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (0);
    }

    my_pid = getpid();
    printf("My pid %u\n",my_pid);
    if (child_pid == 0)
    {
        printf("(%u) Nooooooooooooooo\n",my_pid);
    }
    else
    {
        printf("(%u) %u I am your father\n", my_pid,child_pid);
        /* code */
    }
    

    return (0);
}
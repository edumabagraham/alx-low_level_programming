#include <stdio.h>
#include <unistd.h>

// int main(void)
// {
// //    if (fork() == 0)
// //    {
// //    printf("Hello process, I am the child %u\n", getpid());
// //    }
// //    else
// //    {
// //     printf("I am the parent\n");
// //    }
// //    printf("I am here too\n");

//    fork();
//    printf("hello ");

//     return (0);
// }

/**
 *  * main - fork example
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
    pid_t my_pid;
    pid_t pid;

    printf("Before fork\n");
    pid = fork();
    if (pid == -1)
    {
        perror("Error:");
        return (1);
    }
    printf("After fork\n");
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    return (0);
}

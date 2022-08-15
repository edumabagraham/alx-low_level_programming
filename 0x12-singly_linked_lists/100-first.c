#include <stdio.h>

void startupFunction(void) __attribute__((constructor));

/**
 * startupFunction - prints before the main
 * function is executed
 *
 */
void startupFunction(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}


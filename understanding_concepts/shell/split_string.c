#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    
    char str[] = "Gloria,Edumaba,Graham";

    char *token = strtok(str, ",");

    while (token != NULL)
    {
    printf("%s\n", token);
    token = strtok(NULL,",");
    }
    
    return (0);
}
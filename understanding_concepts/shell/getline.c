#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t n = 10;
    char *buffer = malloc(sizeof(char) * n);
    printf("$ ");
    getline(&buffer, &n, stdin);

    printf("%s size:%ld",buffer,n);
    
    free(buffer);


    return (0);
}
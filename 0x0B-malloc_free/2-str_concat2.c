#include <stdio.h>
#include <stdlib.h>

//Functions
int _strlen(char *s, int i);



char *str_concat(char *s1, char *s2)
{
int i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";


int s1_len = _strlen(s1, 0) - 1;
int s2_len = _strlen(s2, 0);
int len = s1_len + s2_len;
char *s;
s = malloc(sizeof(char)*len);

if (s == NULL)
return NULL;

/**
concat(s,s1,0,s1_len,0);
concat(s,s2,s1_len,len,0);
int concat(char *dest, char* src, int start, int stop,int i);
*/
for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (i = 0; s2[i] != '\0' ; i++)
{
s[s1_len + i] = s2[i];
}


return (s);
}

int _strlen(char *s, int i)
{
if (s[i] == '\0')
{
return (1);
}
return 1 + _strlen(s,i + 1);
}

/**
int concat(char *dest, char* src, int start, int stop,int i)
{
if (start == stop)
return (1);
*(dest + start) = *(src + i);
return (1 * concat(dest,src,start + 1, stop, i + 1));
}*/


#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
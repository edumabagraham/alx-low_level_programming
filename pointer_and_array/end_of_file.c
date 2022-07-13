#include <stdio.h>
#include <string.h>


int main(void)
{
    char *s = "My School";
    int i = 0,eof;
 
    while (i <= strlen(s))
    {
        /*if (i == strlen(s))
        {
           eof = strlen(s);
           printf("\nEnd of string\nString length:%d\nEOF: %d",eof, i);
           
        }
        else
        {
            putchar(s[i]);
        }*/

        putchar(*(s - i));
            i++;
    }
    return (0);
}
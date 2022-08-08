#include "variadic_functions.h"
#include <stdio.h>

/**
 * length - function determines the
 * length of a string 
 * 
 * @str: string argument
 * Return: an int
 */

int length(const char *str)
{
if (*str == '\0')
return (0);
else
{
return (1 + length(str + 1));
}
}

/**
 * print-all - prints arguments of any type
 *
 * @format: the format of the argument to be
 * printed.
 *
 * Return: Nothing
 */

void print_all(const char *const format, ...)
{
unsigned int i, j,c;
char *str;

va_list(args);
i = 0;
c = 0;

va_start(args,format);

while (format && format[i])
{
switch (format[i])
{
case ('c'):
printf("%c, ", va_arg(args, int));
break;
case ('i'):
printf("%d, ", va_arg(args, int));
break;
case ('f'):
printf("%f, ", va_arg(args, double));
break;
case ('s'):
str = va_arg(args,char *);
if (str == NULL)
{
printf("(nil)");
break;
} 
printf("%s, ", str);
break;
default:
break;
}
}
i++;

va_end(args);
}



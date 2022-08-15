#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements
 * in a linked list
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */

int print_list(const list_t *h)
{
const list_t *tmp;
int count = 0;
tmp = h;

while (tmp != NULL)
{
if (tmp->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", tmp->len, tmp->str);
}

count++;
tmp = tmp->next;
}

return (count);
}

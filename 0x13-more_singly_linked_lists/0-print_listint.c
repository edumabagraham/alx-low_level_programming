#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a
 * list
 *
 * @h: head node
 * Return: the number of nodes
 */

int print_listint(const listint_t *h)
{
int count = 0;

while (h)
{
printf("%d\n", h->n);
count++;
h = h->next;
}

return (count);
}


#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * in the linked list
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */

int list_len(const list_t *h)
{
const list_t *tmp;
int count = 0;
tmp = h;

while (tmp != NULL)
{
count++;
tmp = tmp->next;
}

return (count);
}

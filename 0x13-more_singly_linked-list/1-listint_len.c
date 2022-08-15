#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of
 * elements in the linked list
 *
 * @h: head node
 * Return: int
 */

int listint_len(const listint_t *h)
{
int count = 0;
const listint_t *tmp = h;

while (tmp != NULL)
{
count++;
tmp = tmp->next;
}

return (count);
}

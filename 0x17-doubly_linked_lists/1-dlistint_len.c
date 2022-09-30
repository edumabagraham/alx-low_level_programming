#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a linked list
 *
 * @h: head node pointer
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
if (!h)
return (0);

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}

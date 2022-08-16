#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a linked list
 *
 * @head: head node
 * @index: expected node index
 * Return 
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *tmp = head;

while (tmp)
{
count++;
if ((count - 1) == index)
{
return (tmp);
}
tmp = tmp->next;
}

return (NULL);
}

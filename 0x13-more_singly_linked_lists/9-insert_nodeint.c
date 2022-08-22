#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - returns the nth node of
 * a linked list
 *
 * @head: head node
 * @idx: index of the list where the new node should be
 * added
 * @n: value of new node
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp = *head;
listint_t *new_node = malloc(sizeof(listint_t));
unsigned int count = 0;

if (!new_node || !head)
return (NULL);

new_node->n = n;

if (count == idx)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}


while (tmp)
{
if ((idx - count) == 1)
{
new_node->next = tmp->next;
tmp->next = new_node;
return (new_node);
}

count++;
tmp = tmp->next;
}



return (NULL);
}




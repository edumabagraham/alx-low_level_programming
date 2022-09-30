#include "lists.h"
#include "stdlib.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (!head)
return (NULL);

if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;

if(*head)
(*head)->prev = new_node;

*head = new_node;

return (new_node);
}
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * of a linked list
 *
 * @head: head node
 * @n: node data
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *current = *head;

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (current->next != NULL)
{
current = current->next;
}


current->next = new_node;

return (new_node);
}

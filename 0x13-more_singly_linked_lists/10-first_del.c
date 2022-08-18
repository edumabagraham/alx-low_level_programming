#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at index
 *
 * @head: head node
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 0;
int i = 0;
listint_t *tmp = *head;


if (index == 0)
{
*head = (*head)->next;
free(tmp);
i = 1;
}







return (i);

}


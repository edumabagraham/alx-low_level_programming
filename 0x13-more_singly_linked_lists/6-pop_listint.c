#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * of the list.
 *
 * @head: head node
 * Return: the data in the deleted
 * node.
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
int data;

if (*head == NULL)
return (0);

tmp = *head;
data = tmp->n;


*head = (*head)->next;
free(tmp);
return (data);

}

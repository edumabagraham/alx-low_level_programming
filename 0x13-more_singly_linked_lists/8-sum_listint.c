#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum all the data in a
 * linked list
 *
 * @head: head node
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tmp = head;

while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}

return (sum);
}

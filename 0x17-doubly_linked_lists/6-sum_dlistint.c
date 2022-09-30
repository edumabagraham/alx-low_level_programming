#include "lists.h"

/**
 * sum_dlistint - sum the data in the doubly
 * linked list
 *
 * @head: head node
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
int sum_total = 0;
if (!head)
return (sum_total);

while (head)
{
sum_total += head->n;
head = head->next;
}
return (sum_total);
}

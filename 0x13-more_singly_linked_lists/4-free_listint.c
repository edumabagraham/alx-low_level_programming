#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free list
 *
 * @head: head node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}

}

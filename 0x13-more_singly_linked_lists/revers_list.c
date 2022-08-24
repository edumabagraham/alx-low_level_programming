#include "lists.h"
#include <stddef.h>
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *next_node = NULL;

    while (*head != NULL)
    {
        next_node = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next_node;
    }

    *head = prev;
    return (*head);
}
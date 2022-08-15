#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"


/**
 * _str_len - length of a string
 *
 * @str: string argument
 * Return: int
 */
int _str_len(const char *str)
{
if (*str == '\0')
return (0);

return (1 + _str_len(str + 1));
}

/**
 * add_node - adds a new node the begining
 * of the list
 *
 * @head: head of the list
 * @str: string value
 * Return: the new node that has been added
 */

list_t *add_node(list_t **head, const char *str)
{
int length = _str_len(str);
char *duplicated_string = strdup(str);
list_t *new_node = malloc(sizeof(list_t));

if (new_node == NULL)
return (NULL);

new_node->len = length;
new_node->str = duplicated_string;
new_node->next = *head;
*head = new_node;

return (new_node);
}


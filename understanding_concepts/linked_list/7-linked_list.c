#include <stdio.h>
#include <stdlib.h>

/**
 * struct node -
 *
 */
struct node
{
    int value;
    struct node *next;
};

typedef struct node node;

/*
 * create_new_node - creates new nodes
 * @value: data for the node
 *
 * Return: the new node that has been created
 */
node *create_new_node(int value)
{
    node *new_node = malloc(sizeof(node));

    if (!new_node)
        return (NULL);

    new_node->value = value;
    new_node->next = NULL;

    return (new_node);
}

/**
 * add_new_node - adds new node to the begining
 * of the list
 *
 * @head: head of list
 * @value: node value
 * Return: node*
 */

node *add_new_node(node **head, int value)
{
    node *new_node = create_new_node(value);
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

/**
 * add_new_node_to_end - add node to the
 * end of the list
 *
 * @head: head node
 * @value: node value
 * Return: the new node that has been created
 */

node *add_new_node_to_end(node **head, int value)
{
    node *current = *head;
    node *new_node = create_new_node(value);

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

/**
 * print_list - prints out elements in a list
 *
 * @head: head node
 * Return: nothing
 */

void print_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        printf("%d ", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}

int find_node(node *head, int value)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->value == value)
            return tmp->value;
        tmp = tmp->next;
    }
}

int main(int argc, char argv[])
{
    node *head = NULL;
    // node *tmp;
    for (int i = 0; i < 5; i++)
    {
        add_new_node(&head, i);
        add_new_node_to_end(&head, i);
    }
    int result = find_node(head, 2);
    if (result)
        printf("%d is in the list\n", result);
    else
        printf("Not in the list\n");

    print_list(head);
    return (0);
}
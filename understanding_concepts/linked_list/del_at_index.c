#include <stdlib.h>
#include <stdio.h>

// struct
struct node
{
    int value;
    struct node *next;
};

typedef struct node node;

// create new node and attach to the head of the list
node *create_new_node(int value)
{
    node *result = malloc(sizeof(node));
    result->value = value;
    result->next = NULL;

    return (result);
}

// add node to the beginning of the list
node *add_node_beginning(node **head, int value)
{
    node *new_node = create_new_node(value);

    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

//print list
void print_list(node *head)
{
    node *tmp = head;

    while (tmp != NULL)
    {
        printf("%d\n", tmp->value);
        tmp = tmp->next;
    }
    
}

void delete_nodeint_at_index(node **head, unsigned int index)
{
    unsigned int i = 0;
    node *tmp = *head;
    node *current = NULL;

    if (index == 0)
    {
        *head = (*head)->next;
        free(tmp);
        // return (1);
    }

    else
    {
    while (tmp)
    {
    if (i == (index - 1))
    {
        current = tmp->next;
        tmp->next = current->next;
        free(current);
    }

       i++;
       tmp = tmp->next;
    }

    }
}

int main()
{   
    node *head = NULL;
    
    add_node_beginning(&head, 7);
    add_node_beginning(&head, 98);
    add_node_beginning(&head, 67);
    add_node_beginning(&head, 88);
    print_list(head);
    delete_nodeint_at_index(&head, 0);
    printf("----------------------\n");
    print_list(head);
    delete_nodeint_at_index(&head, 1);
    printf("----------------------\n");
    print_list(head);
    return (0);
}
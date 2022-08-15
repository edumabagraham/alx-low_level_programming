#include <stdio.h>
#include <stdlib.h>

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

/*
prints the nodes in the list
*/
void printList(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        printf("%d ", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}

/*
find a particular value
*/
node *find_node(node *head, int value)
{
    node *temp;
    temp = head;
    while (temp != NULL)
    {
        if (temp->value == value)
        {
            return (temp);
        }
        temp = temp->next;
    }
    return (NULL);
}

/*insert new node at the beginning of the list
 */

node *insert_new_node(node **head, node *new_node)
{
    new_node->next = *head;
    *head = new_node;
    return new_node;
}

int main()
{
    node *head = NULL;
    node *tmp;

    for (int i = 0; i < 25; i++)
    {
        tmp = create_new_node(i);
        insert_new_node(&head, tmp);
    }

    node *result = find_node(head, 17);
    printf("%d is in the list\n", result->value);
    printList(head);
    return (0);
}

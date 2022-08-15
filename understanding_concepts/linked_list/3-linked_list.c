#include <stdio.h>
#include <stdlib.h>


//struct
struct node{
    int value;
    struct node *next;
};

typedef struct node node;
//create new node and attach to the head of the list
node *create_new_node(int value)
{
    node *result = malloc(sizeof(node));
    result->value = value;
    result->next = NULL;

    return (result);
}

//prints the nodes in the list
void printList(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        printf("%d ",tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}

int main()
{   
    node *head;
    node *tmp;

    tmp = create_new_node(32);
    head =tmp;
    tmp = create_new_node(16);
    tmp->next = head;
    head = tmp;
    tmp = create_new_node(7);
    tmp->next = head;
    head = tmp;

    printList(head);
    return (0);
}

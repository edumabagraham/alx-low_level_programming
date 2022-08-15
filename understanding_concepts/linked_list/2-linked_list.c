#include <stdio.h>


struct node
{
    int value;
    struct node *next;
};

typedef struct node node;


//function to print the items in the list
void print_list(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
    
}


int main()
{
    node n1, n2, n3;
    node *head;

    n1.value = 67;
    n2.value = 7;
    n3.value = 98;

    //link them into a list
    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;  // this indicates the end of the list

    //add new node
    node n4;
    n4.value = 168;
    n4.next = &n2;
    n3.next = &n4;

    head = head ->next;
    //call printing function
    print_list(head);

    return (0);
}
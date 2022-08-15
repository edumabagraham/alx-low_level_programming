#include <stdio.h>
#include <stdlib.h>


typedef struct node *nodePtr;


struct node {
    int value;
    nodePtr next;
};  

typedef struct node node;

int main (int argc, const char * argv[]){
    nodePtr first = NULL;
    first = malloc(sizeof(node));
    first->next = NULL;


    // node firstNode;
    // firstNode.next;

    first->value = 61;
    first->next = malloc(sizeof(node));
    first->next->next = NULL;
    first->next->value = 62;

    
    printf("Hello World!\n");
    return (0);
}
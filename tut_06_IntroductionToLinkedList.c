#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // point each node of the list
};

void linkedListTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    /*
    Introduction to Linked List:

    Create a single linkedlist and traversal

    */

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate dynamic memory for the nodes in the linked list in heap.
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 18;
    second->next = third;

    // Link third and fourth nodes
    third->data = 66;
    third->next = fourth;

    //Terminate the list at the fourth node
    fourth->data = 85;
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;
}
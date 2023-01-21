#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // point each node of the list
};

// Traversal
void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}


//Insert at first
struct Node *insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;

    while(p->next != head){
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{

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
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 1;
    fourth->next = head;

    printf("C_LinkedList before operation:\n");
    linkedListTraversal(head);

    printf("\nC_LinkedList after operation:\n");
    head = insertAtFirst(head, 32);
    linkedListTraversal(head);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

void doublyLinkedListtraversal(struct Node *head){
    struct Node *ptr = head;

    while(ptr!=NULL){
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    head->prev = ptr;
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
    head->prev = NULL;
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->prev = head;
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->prev = second;
    third->data = 6;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Doubly Linked List Before Operation:\n");
    doublyLinkedListtraversal(head);

    printf("Doubly Linked List Before Operation:\n");
    head = insertAtFirst(head, 12);
    doublyLinkedListtraversal(head);

}
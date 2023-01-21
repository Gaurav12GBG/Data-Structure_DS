#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // point each node of the list
};

//Deleting the first Node
struct Node *deleteAtFirst(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//Deleting the Node in between
struct Node *deleteAtIndex(struct Node *head,int index){
    struct Node *p = head;
    int i=0;

    while(i!=index-1){
        p = p->next;
        i++;
    }

    struct Node *q = p->next;
    p->next = q->next;
    free(q);

    return head;
}

//Deleting the Node at end
struct Node *deleteAtEnd(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

//Deleting the Node using value
struct Node *deleteUsingValue(struct Node *head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    
    while(q->data!=value && q->next != NULL){
        p = p->next;
        q = q->next;
    }

    if(q->data == value){
        p->next = q->next;
        free(q);
    }

    return head;
}


//Traversal
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
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
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 18;
    second->next = third;

    // Link third and fourth nodes
    third->data = 66;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 85;
    fourth->next = NULL;

    printf("Linked List before deletion:\n");
    linkedListTraversal(head);

    printf("\nLinked List after deletion:\n");
    // head = deleteAtFirst(head);
    // head = deleteAtIndex(head, 1);
    // head = deleteAtEnd(head);
    head = deleteUsingValue(head, 66);
    linkedListTraversal(head);

    return 0;
}
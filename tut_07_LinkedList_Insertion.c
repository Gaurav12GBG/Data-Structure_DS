#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // point each node of the list
};

//Traversal
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//insert at first
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

//insert in between
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    { // p at previous of index
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

//insert at end
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;

    while (p->next != NULL)
    { // p at previous of index
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
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

    printf("Linked list before insertion:\n");
    linkedListTraversal(head);

    printf("\nLinked list after insertion:\n");
    //  head = insertAtFirst(head, 100);
    //  head = insertAtIndex(head, 555, 0);
    head = insertAtEnd(head, 99);
    linkedListTraversal(head);

    return 0;
}
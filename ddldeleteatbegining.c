#include <stdio.h>
#include <stdlib.h>

// Structure for a doubly linked list node
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

int main() {
    struct node *head, *second, *third, *fourth;

    // Allocating memory for nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Assigning data and linking nodes
    head->data = 1;
    head->prev = NULL;
    head->next = second;

    second->data = 2;
    second->prev = head;
    second->next = third;

    third->data = 3;
    third->prev = second;
    third->next = fourth;

    fourth->data = 4;
    fourth->prev = third;
    fourth->next = NULL;

    // Printing the original list
    printf("Original Doubly Linked List:\n");
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d<->", ptr->data);
        ptr = ptr->next;
    }

    // Deleting the first node
    ptr = head;
    head = head->next; // Move head to next node
    // if (head != NULL)
    //     head->prev = NULL; // Update new head's prev to NULL
    free(ptr); // Free the deleted node

    printf("\nUpdated Doubly Linked List after deletion:\n");
    ptr = head;
    while (ptr != NULL) {
        printf("%d<->", ptr->data);
        ptr = ptr->next;
    }


    

    return 0;
}

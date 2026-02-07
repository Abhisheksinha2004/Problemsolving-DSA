#include <stdio.h>
#include <stdlib.h>

// Structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to insert at the beginning of DLL
void insertAtBeginning(struct Node** head, int value) {
    printf("\nBefore inserting %d: ", value);
    printList(*head);

    // Allocate memory for new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = *head;

    // If the list is not empty, update the previous head's prev pointer
    if (*head != NULL) {
        (*head)->prev = newNode;
    }

    // Change the head to the new node
    *head = newNode;

    printf("After inserting %d: ", value);
    printList(*head);
}

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to create a doubly linked list with 5 nodes
struct Node* createList() {
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);
    struct Node* fourth = createNode(40);
    struct Node* fifth = createNode(50);

    // Connecting nodes
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = fifth;

    fifth->prev = fourth;

    return head;  // Return head of the list
}

// Function to print the doubly linked list
void printList(struct Node* head) {
    struct Node* ptr = head;
    printf("Doubly Linked List: ");
    while (ptr != NULL) {
        printf("%d <-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Driver function
int main() {
    // Create a list with 5 nodes
    struct Node* head = createList();

    // Print the original list
    printf("Original List: ");
    printList(head);

    // Insert a new node at the beginning
    insertAtBeginning(&head, 5);

    return 0;
}






#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end of the circular linked list
void insertEnd(struct Node** last, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (*last == NULL) {
        // List is empty: new node points to itself
        newNode->next = newNode;
        *last = newNode;
    } else {
        // Insert newNode after last and move last to newNode
        newNode->next = (*last)->next;
        (*last)->next = newNode;
        *last = newNode;
    }
}

// Function to traverse and print the circular linked list
void traverse(struct Node* last) {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = last->next; // Start from first node

    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);

    printf("\n");
}

int main() {
    struct Node* last = NULL;

    insertEnd(&last, 10);
    insertEnd(&last, 20);
    insertEnd(&last, 30);

    traverse(last);

    return 0;
}

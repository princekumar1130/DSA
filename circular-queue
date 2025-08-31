#include <stdio.h>
#define SIZE 5   // maximum size of queue

int queue[SIZE];
int front = -1, rear = -1;

// Function to check if queue is full
int isFull() {
    return ((front == 0 && rear == SIZE - 1) || (front == rear + 1));
}

// Function to check if queue is empty
int isEmpty() {
    return (front == -1);
}

// Insert an element in Circular Queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is FULL! Cannot insert %d\n", value);
        return;
    }
    if (front == -1) // first element
        front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
    printf("Inserted %d\n", value);
}

// Delete an element from Circular Queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is EMPTY! Cannot delete.\n");
        return;
    }
    printf("Deleted %d\n", queue[front]);
    if (front == rear) {
        // Queue has only one element
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

// Display elements in Circular Queue
void display() {
    if (isEmpty()) {
        printf("Queue is EMPTY!\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);  // will fill the queue
    display();

    dequeue();
    dequeue();
    display();

    enqueue(60);
    enqueue(70);
    display();

    return 0;
}

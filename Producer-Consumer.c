#include <stdio.h>
#define SIZE 5   // buffer size
int buffer[SIZE];
int in = 0, out = 0, count = 0;
void produce(int item) {
    if (count == SIZE) {
        printf("Buffer full! Producer waits...\n");
    } else {
        buffer[in] = item;
        in = (in + 1) % SIZE;
        count++;
        printf("Produced: %d\n", item);
    }
}
void consume() {
    if (count == 0) {
        printf("Buffer empty! Consumer waits...\n");
    } else {
        int item = buffer[out];
        out = (out + 1) % SIZE;
        count--;
        printf("Consumed: %d\n", item);
    }
}

int main() {
    int choice, item;

    while (1) {
        printf("\n1. Produce\n2. Consume\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter item to produce: ");
                scanf("%d", &item);
                produce(item);
                break;
            case 2:
                consume();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }}}

#include <stdio.h>

int main()
{
    int queue[100];
    int front = 0, rear = -1;
    int i;

    // Original queue
    queue[++rear] = 5;
    queue[++rear] = 8;
    queue[++rear] = 9;

    printf("Original Queue: ");
    for(i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    // Enqueue operation
    queue[++rear] = 1;

    printf("\nAfter Enqueue: ");
    for(i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    // Dequeue operation
    printf("\nDequeued Item: %d", queue[front]);
    front++;

    printf("\nAfter Dequeue: ");
    for(i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    return 0;
}
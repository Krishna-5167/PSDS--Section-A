
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

// Stack pointer
struct Node *top = NULL;

// Queue pointers
struct Node *front = NULL;
struct Node *rear = NULL;

// Stack Push operation
void push(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed into stack.\n", value);
}

// Stack Pop operation
void pop() {
    if (top == NULL) {
        printf("Stack Underflow!\n");
        return;
    }

    struct Node *temp = top;
    printf("%d popped from stack.\n", top->data);

    top = top->next;
    free(temp);
}

// Display Stack
void displayStack() {
    struct Node *temp = top;

    if (temp == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack (top to bottom): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Queue Enqueue operation
void enqueue(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d enqueued into queue.\n", value);
}

// Queue Dequeue operation
void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow!\n");
        return;
    }

    struct Node *temp = front;
    printf("%d dequeued from queue.\n", front->data);

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    free(temp);
}

// Display Queue
void displayQueue() {
    struct Node *temp = front;

    if (temp == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue (front to rear): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    int choice, value;

    while (1) {
        printf("\n===== STACK AND QUEUE =====\n");
        printf("1. Push (Stack)\n");
        printf("2. Pop (Stack)\n");
        printf("3. Display Stack\n");
        printf("4. Enqueue (Queue)\n");
        printf("5. Dequeue (Queue)\n");
        printf("6. Display Queue\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                if (scanf("%d", &value) != 1)
                    return 0;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                displayStack();
                break;

            case 4:
                printf("Enter value to enqueue: ");
                if (scanf("%d", &value) != 1)
                    return 0;
                enqueue(value);
                break;

            case 5:
                dequeue();
                break;

            case 6:
                displayQueue();
                break;

            case 7:
                while (top != NULL) {
                    struct Node *temp = top;
                    top = top->next;
                    free(temp);
                }

                while (front != NULL) {
                    struct Node *temp = front;
                    front = front->next;
                    free(temp);
                }

                rear = NULL;
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

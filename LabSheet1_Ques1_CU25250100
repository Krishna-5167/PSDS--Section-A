#include <stdio.h>

int main()
{
    int stack[100];
    int top = -1;
    int i;

    // Initial stack
    stack[++top] = 1;
    stack[++top] = 2;
    stack[++top] = 3;

    printf("Original Stack: ");
    for(i = 0; i <= top; i++)
        printf("%d ", stack[i]);

    // Push operation
    stack[++top] = 4;

    printf("\nAfter Push: ");
    for(i = 0; i <= top; i++)
        printf("%d ", stack[i]);

    // Pop operation
    printf("\nPopped Item: %d", stack[top]);
    top--;

    printf("\nAfter Pop: ");
    for(i = 0; i <= top; i++)
        printf("%d ", stack[i]);

    // Pop all elements
    printf("\n\nPopping the items:\n");

    while(top >= 0)
    {
        printf("Popping this item: %d\n", stack[top]);
        top--;

        printf("Stack after pop: ");
        for(i = 0; i <= top; i++)
            printf("%d ", stack[i]);

        printf("\n");
    }

    return 0;
}
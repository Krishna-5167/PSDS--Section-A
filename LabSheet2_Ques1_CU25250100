#include <stdio.h>

int main()
{
    int arr[100], n, key;
    int i, result = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            result = i;
            break;
        }
    }

    if(result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
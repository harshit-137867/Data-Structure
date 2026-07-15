// Insert an element into the array at user defined position.
#include<stdio.h>

#include <stdio.h>

void main() {
    int arr[100], size, pos, element;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position (0-based index): ");
    scanf("%d", &pos);

    if (pos < 0 || pos > size) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    size++;

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    getch();
}

// Delete an element from the array from user defined position.
#include <stdio.h>

#include <stdio.h>

void main() {
    int arr[100], size, pos;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= size) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    getch();
}

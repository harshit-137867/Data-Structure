// Create array A, B of size 3 and C of size 6, merge A and B.
#include<stdio.h>
#include<conio.h>

int main(){ // Changed to int main() for modern standards
    int a[3], b[3], c[6];

    // User input for a
    printf("Enter elements of A array : \n");
    for (int i=0; i<3; i++){
        scanf("%d", &a[i]);
    }

    // User input for b
    printf("Enter elements of B array : \n");
    for (int i=0; i<3; i++){
        scanf("%d", &b[i]);
    }

    // All elements of a into c
    for (int i=0; i<3; i++){
        c[i] = a[i];
    }

    // All elements of b into c
    for (int i=3; i<6; i++){
        c[i] = b[i - 3]; // Fixed: Offset the index so b starts at 0
    }

    // Printing the merged result
    printf("Merged array : \n");
    for (int i=0; i<6; i++){
        printf("%d ", c[i]);
    }

    return 0;
}

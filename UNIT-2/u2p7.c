// Smallest common divisor of an given number.
#include <stdio.h>

void main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("Smallest common divisor of %d is %d\n", n, i);
            break;
        }
    }
    getch();
}

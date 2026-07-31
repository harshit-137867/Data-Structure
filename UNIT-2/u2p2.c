// WAP of factorial using stack
#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = x;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        push(i);
    }

    while (top != -1) {
        fact *= pop();
    }

    printf("Factorial of %d = %llu\n", n, fact);

    return 0;
}

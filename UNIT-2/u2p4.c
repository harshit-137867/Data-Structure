// Find factorial of integer using stack
#include <stdio.h>
#define MAX 50

int stack[MAX];
int top = -1;

// Push function
void push(int val) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        stack[++top] = val;
    }
}

// Pop function
int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        return stack[top--];
    }
}

void main() {
    int n, result = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Push all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        push(i);
    }

    // Pop and multiply
    while (top != -1) {
        result *= pop();
    }

    printf("Factorial of %d = %d\n", n, result);
    getch();
}

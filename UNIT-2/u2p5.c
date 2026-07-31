// Power of given number using stack.
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

// Power function using stack
int power(int base, int exp) {
    int result = 1;

    for (int i = 0; i < exp; i++) {
        push(base);
    }

    while (top != -1) {
        result *= pop();
    }

    return result;
}

int main() {
    int base, exp;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    int ans = power(base, exp);
    printf("%d^%d = %d\n", base, exp, ans);

    return 0;
}

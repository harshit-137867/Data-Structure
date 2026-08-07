#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int val;
    if (rear == MAX - 1) {
        printf("\nQueue Overflow!");
    } else {
        printf("Enter element to insert : ");
        scanf("%d", &val);
        if (front == -1) front = 0;
        queue[++rear] = val;
        printf("Inserted Successfully.\n");
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue Underflow!");
    } else {
        printf("Deleted element is : %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty.");
    } else {
        printf("\nQueue elements are : \n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

void main() {
    int choice;

    while (1) {
        printf("\n------Queue Menu------\n");
        printf("1. Insert\n"); // Enqueue
        printf("2. Delete\n"); // Dequeue
        printf("3. Display\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        default:
            printf("Invalid choice! Select from (1-3).");
        }
    }
    getch();
}

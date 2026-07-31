//
#include<stdio.h>
#include<conio.h>
#define MAX 10

int stack[10];
int top = -1;

// Function for push
void push(){
    int val;
    if (top == MAX - 1){
        printf("\nStack Overflow!");
    }
    else{
        printf("Enter element to push : ");
        scanf("%d", &val);
        top ++;
        stack[top] = val;
        printf("Inserted Successfully.");
    }
}

// Function for pop
void pop(){
    if (top == -1){
        printf("Stack Underflow!");
    }
    else{
        printf("Deleted element is : %d\n", stack[top]);
        top --;
    }
}

// Function for display
void display(){
    if (top == -1){
        printf("\nStack is empty.");
    }
    else{
        printf("\nStack elements are : \n");

        for (int i=top; i>=0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

// Function for peek
void peek(){
    if (top == -1){
        printf("Stack is Empty!");
    }
    else {
        printf("Topmost element : %d", stack[top]);
    }
}

// Function for update
void update(){
    int i, x;
    printf("Enter an element you want to update : ");
    scanf("%d", &i);

    if (top - i + 1 == -1){
        printf("Underflow!");
    }
    else {
        printf("Enter new value : ");
        scanf("%d", &x);
        stack[top - i + 1] = x;
    }
}

// Main function
void main(){
    int choice;

    while(1){
        printf("\n------Stack Menu------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("6. Update\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice){
        case 1 :
            push();
            break;

        case 2 :
            pop();
            break;

        case 3 :
            display();
            break;

        case 4 :
            peek();
            break;

        case 5 :
            printf("Program terminated.");
            exit(0);

        case 6 :
            update();
            break;

        default :
            printf("Invalid choice! Select from(1-4).");
        }
    }
    getch();
}

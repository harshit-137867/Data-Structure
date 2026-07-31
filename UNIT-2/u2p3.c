// WAP to print string in reverse using stack
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 50

char stack[MAX];
int top = -1;

void push(char c){
    if (top == MAX - 1){
         printf("\nStack Overflow!");
    }
    else {
        top ++;
        stack[top] = c;
    }
}

void pop(){
    if (top == -1){
        printf("\nStack Underflow!\n");
    }
    else {
        printf("%c", stack[top]);
        top --;
    }
}

void main(){

}

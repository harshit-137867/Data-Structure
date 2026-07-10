// Find the largest
#include<stdio.h>
#include<conio.h>

void main(){
    int a[10], largest;
    // User input 10 values
    printf("Enter 10 values for array : ");
    for (int i=0; i<=9; i++){
        scanf("%d", &a[i]);
    }
    // Assigning 0th index as largest
    largest = a[0];
    // Checking from 1 to 10 for largest
    for (int i=1; i<=9; i++){
        if (a[i] > largest){
            largest = a[i];
        }
    }
    // Printing largest
    printf("Largest value : %d", largest);
    getch();
}

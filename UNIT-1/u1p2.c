// Create an array of size 10, input values and display sum and average of array.

void main(){
    int arr[10], i, sum = 0;
    printf("Enter 10 Values : \n");
    for (i=0; i<=9; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    float average = sum / 10.0;

    printf("Sum : %d\n", sum);
    printf("Average : %f", average);

    getch();
}

// 1. Create an array of size 10, input values and print the array, and search an element in array.

void main(){
    int arr[10], search, i;
    printf("Enter 10 Values : \n");
    for (i=0; i<=9; i++){
        scanf("%d", &arr[i]);
    }

    printf("The following values are : \n");
    for (i=0; i<=9; i++){
        printf("%d\n", arr[i]);
    }

    printf("Enter the value to search : ");
    scanf("%d", &search);
    for (i=0; i<=9; i++){
        if (arr[i] == search){
            break;
        }
    }
    if (i == 10){
        printf("Value not found.");
    }
    else{
        printf("Value found at location %d.", i+1);
    }
    getch();
}

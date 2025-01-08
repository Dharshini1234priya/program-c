#include <stdio.h>

void reverseArray(int *arr, int n) {
    int *start = arr;          
    int *end = arr + n - 1;    
    int temp;

    while (start < end) {
 
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); 
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    printArray(arr, n);

    reverseArray(arr, n);

    printf("Reversed array:\n");
    printArray(arr, n);

    return 0;
}


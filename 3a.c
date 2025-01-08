#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    if (start > end) {
        printf("Invalid range. The starting number should be less than or equal to the ending number.\n");
        return 1;
    }
    printf("Even numbers between %d and %d are:\n", start, end);
    if (start % 2 != 0) {
        start++;
    }
    for (int i = start; i <= end; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}





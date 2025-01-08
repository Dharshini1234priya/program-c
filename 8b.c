#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book *bookPtr;

    bookPtr = (struct Book *)malloc(sizeof(struct Book));

    if (bookPtr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    printf("Enter book title: ");
    fgets(bookPtr->title, sizeof(bookPtr->title), stdin); 
    bookPtr->title[strcspn(bookPtr->title, "\n")] = '\0';

    printf("Enter author name: ");
    fgets(bookPtr->author, sizeof(bookPtr->author), stdin);
    bookPtr->author[strcspn(bookPtr->author, "\n")] = '\0';

    printf("Enter price of the book: ");
    scanf("%f", &bookPtr->price);

    printf("\nBook Details:\n");
    printf("Title: %s\n", bookPtr->title);
    printf("Author: %s\n", bookPtr->author);
    printf("Price: %.2f\n", bookPtr->price);

    free(bookPtr);

    return 0;
}



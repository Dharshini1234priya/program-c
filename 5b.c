#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500], searchStr[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter the string to search: ");
    fgets(searchStr, sizeof(searchStr), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';
    searchStr[strcspn(searchStr, "\n")] = '\0';

    if (strstr(sentence, searchStr) != NULL) {
        printf("'%s' found in the sentence.\n", searchStr);
    } else {
        printf("'%s' not found in the sentence.\n", searchStr);
    }

    return 0;
}


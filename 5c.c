#include <stdio.h>
#include <string.h>

int searchStringInSentence(char sentence[], char searchString[]) {
    char *pos = strstr(sentence, searchString);  

    if (pos != NULL) {
    
        return pos - sentence;
    } else {

        return -1;
    }
}

int main() {
    char sentence[100], searchString[50];
    int position;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  
    
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Enter the string to search: ");
    fgets(searchString, sizeof(searchString), stdin);

    searchString[strcspn(searchString, "\n")] = '\0';

    position = searchStringInSentence(sentence, searchString);

    if (position != -1) {
        printf("The string '%s' is found at position %d.\n", searchString, position);
    } else {
        printf("The string '%s' was not found in the sentence.\n", searchString);
    }

    return 0;
}


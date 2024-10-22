#include <stdio.h>

// Function to check if two strings are the same
int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Loop through each character of both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // If any character is different, return 0 (not the same)
        }
        i++;
    }

    // If both strings end at the same position, they are identical
    return (str1[i] == '\0' && str2[i] == '\0');
}

int main() {
    char word1[100], word2[100];

    // Input the first word
    printf("Enter the first word: ");
    scanf("%s", word1);

    // Input the second word
    printf("Enter the second word: ");
    scanf("%s", word2);

    // Compare the two words
    if (compareStrings(word1, word2)) {
        printf("The words are the same.\n");
    } else {
        printf("The words are not the same.\n");
    }

    return 0;
}

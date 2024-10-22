#include <stdio.h>
#include <string.h> // Include string.h for strchr function

int countVowels(const char *str) {
    int count = 0;
    char vowels[] = "AEIOUaeiou"; // Vowels (both uppercase and lowercase)

    // Iterate through each character in the string
    while (*str) {
        // Check if the current character is a vowel
        if (strchr(vowels, *str)) {
            count++; // Increment count if it's a vowel
        }
        str++; // Move to the next character
    }
    return count;
}

int main() {
    char input[100]; // Array to hold the input string

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); // Read input string

    // Count and print the number of vowels
    int vowelCount = countVowels(input);
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}

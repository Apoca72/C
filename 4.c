#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello ";              // Source string, with a space
    char s2[20] = "MUIS-iinhaan";     // Destination string
    int i;

    // Shift s2 content to the right by 6 characters to make space for "hello "
    int len_s = strlen(s);            // Length of string "hello "
    int len_s2 = strlen(s2);          // Length of the original s2 string

    for (i = len_s2; i >= 0; i--) {
        s2[i + len_s] = s2[i];        // Shift characters in s2
    }

    // Copy "hello " into the beginning of s2
    for (i = 0; i < len_s; i++) {
        s2[i] = s[i];                 // Copy characters from s to s2
    }

    printf("%s", s2);  // Print the modified s2
    return 0;
}

/* Count vowels and consonants in a string.
*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    while (str[i] != '\0') {
        char ch = str[i];

        // Check if character is a letter
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert to lowercase for simplicity
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

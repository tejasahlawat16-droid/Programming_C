/*  Count characters in a string without using built-in length functions.

*/

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    // Count characters until null character is found
    while (str[count] != '\0') {
        count++;
    }

    // Subtract 1 if fgets includes the newline character
    if (str[count-1] == '\n') {
        count--;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}

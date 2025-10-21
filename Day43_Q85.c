/* Reverse a string.
*/

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    char temp;

    printf("Enter a string: ");
    gets(str);  // use fgets(str, sizeof(str), stdin) in modern code

    // Find length of string manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string in place
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

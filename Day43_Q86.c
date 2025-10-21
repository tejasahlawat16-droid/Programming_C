/* Check if a string is a palindrome.

*/
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, flag = 0;

    printf("Enter a string: ");
    gets(str);  // for simplicity; prefer fgets() in real programs

    // Find string length manually
    while (str[length] != '\0') {
        length++;
    }

    // Check if the string is palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

/* Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i, start = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    len = strlen(str);
    for (i = 0; i <= len; i++) {
        // When space or end of string is found, reverse the current word
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed each word: %s\n", str);

    return 0;
}

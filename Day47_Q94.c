/* Find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    gets(str);  // Note: gets() is unsafe, use fgets() in real programs

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0; // reset for next word
        }
        i++;
    }

    // Check the last word
    word[j] = '\0';
    len = strlen(word);
    if (len > maxLen) {
        strcpy(longest, word);
        maxLen = len;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

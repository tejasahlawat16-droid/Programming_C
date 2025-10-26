/* Print all sub-strings of a string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    len = strlen(str);

    printf("All substrings are:\n");

    // Generate all substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    return 0;
}

/* Replace spaces with hyphens in a string.
*/

#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);  // Note: unsafe, prefer fgets() in modern code

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("String after replacing spaces with hyphens: %s\n", str);

    return 0;
}

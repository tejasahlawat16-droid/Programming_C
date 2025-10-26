/* Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, len, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    len = strlen(name);

    // Find the position of the last space (before the surname)
    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Formatted name: ");

    // Print initials for all words except the surname
    for (i = 0; i < len; i++) {
        if (i == 0 && name[i] != ' ')
            printf("%c. ", toupper(name[i]));
        else if (name[i - 1] == ' ' && i < lastSpace)
            printf("%c. ", toupper(name[i]));
    }

    // Print surname in full
    if (lastSpace != -1)
        printf("%s", &name[lastSpace + 1]);
    else
        printf("%s", name);  // If only one name entered

    printf("\n");

    return 0;
}

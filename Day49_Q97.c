/* Print the initials of a name. 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    int len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    printf("Initials: ");

    // Print first character if it's not a space
    if (name[0] != ' ')
        printf("%c", toupper(name[0]));

    // Loop through the string to find spaces
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c", toupper(name[i]));
    }

    printf("\n");

    return 0;
}

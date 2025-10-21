/* Toggle case of each character in a string.
*/
#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);  // Note: unsafe, use fgets() in practice

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert lowercase to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // convert uppercase to lowercase
        }
    }

    printf("String after toggling case: %s\n", str);

    return 0;
}

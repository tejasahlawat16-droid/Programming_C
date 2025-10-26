/* Check if one string is a rotation of another.
*/

#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Lengths must be equal for rotation
    if (len1 != len2)
        return 0;

    // Create a temporary string containing str1 twice
    char temp[200]; // Make sure it's large enough
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (isRotation(str1, str2))
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are not rotations of each other.\n");

    return 0;
}

/* Write a program to find the 1’s complement of a binary number and print it.
*/


#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find length of binary string
    int len = strlen(binary);

    // Traverse each bit and flip it
    for (int i = 0; i < len; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 1;
        }
    }

    printf("1's Complement = %s\n", binary);

    return 0;
}

/* Write a program to print the following pattern:
*
**
***
****
*****
*/

#include <stdio.h>

int main() {
    int i, j;

    // Loop for rows
    for(i = 1; i <= 5; i++) {
        // Loop for stars in each row
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}

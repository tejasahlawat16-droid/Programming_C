/* Write a program to reverse a given number.
*/
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse logic
    while (num != 0) {
        remainder = num % 10;            // get last digit
        reversed = reversed * 10 + remainder; // add digit to reversed
        num /= 10;                       // remove last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}

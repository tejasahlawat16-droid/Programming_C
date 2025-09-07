/* Write a program to check if a number is prime.
*/

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle special cases
    if (num <= 1) {
        printf("%d is NOT a prime number.\n", num);
        return 0;
    }

    // Check divisibility
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;  // not prime
            break;
        }
    }

    // Print result
    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    return 0;
}


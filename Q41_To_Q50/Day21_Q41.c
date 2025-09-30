/* Write a program to swap the first and last digit of a number.
*/  

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum, middlePart;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find total digits
    digits = (int)log10(num) + 1;

    // Extract first and last digit
    firstDigit = num / (int)pow(10, digits - 1);
    lastDigit = num % 10;

    // Extract middle part (excluding first and last digits)
    middlePart = (num % (int)pow(10, digits - 1)) / 10;

    // Construct swapped number
    swappedNum = lastDigit * (int)pow(10, digits - 1) + middlePart * 10 + firstDigit;

    // Output
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
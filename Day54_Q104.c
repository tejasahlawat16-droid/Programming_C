/* Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/



#include <stdio.h>

int findPivotInteger(int n) {
    int totalSum = n * (n + 1) / 2; // sum from 1 to n

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;          // sum from 1 to x
        int rightSum = totalSum - (x - 1) * x / 2; // sum from x to n

        if (leftSum == rightSum)
            return x;  // Found the pivot integer
    }

    return -1; // No pivot integer found
}

int main() {
    int n;

    // Input positive integer
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! n must be positive.\n");
        return 0;
    }

    int pivot = findPivotInteger(n);

    printf("Pivot Integer: %d\n", pivot);

    return 0;
}

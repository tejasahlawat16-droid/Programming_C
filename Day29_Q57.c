/* Find the sum of array elements.
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];   // declare array of size n

    // Read elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   // add each element to sum
    }

    // Print sum
    printf("The sum of array elements is: %d\n", sum);

    return 0;
}


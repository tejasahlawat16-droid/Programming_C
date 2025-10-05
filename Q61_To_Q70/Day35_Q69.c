/* Find the second largest element in an array.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int first, second;

    // Input: size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate input
    if (n < 2) {
        printf("At least two elements are required.\n");
        return 1;
    }

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second largest
    first = second = -999999; // can also use INT_MIN with <limits.h>

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -999999)
        printf("There is no second largest element (all elements are equal).\n");
    else
        printf("The second largest element is: %d\n", second);

    return 0;
}

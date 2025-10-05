/* Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main() {
    int arr[100], n, i, j, num;

    // Input: size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input: sorted array elements
    printf("Enter %d elements (in sorted order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &num);

    // Find position and shift elements
    for (i = n - 1; (i >= 0 && arr[i] > num); i--) {
        arr[i + 1] = arr[i];  // shift right
    }

    // Insert new element
    arr[i + 1] = num;
    n++;  // increase array size

    // Display new sorted array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

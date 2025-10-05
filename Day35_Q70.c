/* Rotate an array to the right by k positions.
*/

#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];

    // Input: size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: number of rotations
    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);

    // Handle cases where k >= n
    k = k % n;

    // Perform right rotation
    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy rotated array back to original
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    // Display result
    printf("Array after right rotation by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

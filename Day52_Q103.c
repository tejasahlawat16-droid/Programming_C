/* Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1
*/

#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    // Calculate total sum of the array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Traverse the array and check pivot condition
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i]; // remaining sum on right

        if (leftSum == rightSum)
            return i;  // Found the pivot index

        leftSum += arr[i];  // Update left sum for next iteration
    }

    return -1;  // No pivot index found
}

int main() {
    int n;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print pivot index
    int pivot = findPivotIndex(arr, n);

    printf("Pivot Index: %d\n", pivot);

    return 0;
}

/* Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

*/

#include <stdio.h>

// Function to find the index of the ceil of x
int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ceilIndex = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;   // Possible ceil found
            high = mid - 1;    // Search on the left for first occurrence
        } else {
            low = mid + 1;     // Search right side
        }
    }
    return ceilIndex;
}

int main() {
    int n, x;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target value
    printf("Enter value of x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    if (index == -1)
        printf("-1\n");
    else
        printf("Ceil index: %d\n", index);

    return 0;
}


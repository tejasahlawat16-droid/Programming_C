/* Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

*/

#include <stdio.h>

int main() {
    int n;
    
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count, majority = -1;
    
    // Check each element's frequency
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        // Check if element appears more than floor(n/2) times
        if (count > n / 2) {
            majority = arr[i];
            break;
        }
    }
    
    // Print result
    if (majority != -1)
        printf("Majority element: %d\n", majority);
    else
        printf("-1\n");
    
    return 0;
}

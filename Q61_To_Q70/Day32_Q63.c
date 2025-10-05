/* Merge two arrays.
*/

#include <stdio.h>

int main() {
    int n1, n2, n3, i, j;
    
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    
    printf("Enter %d elements for first array: ", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    
    printf("Enter %d elements for second array: ", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    n3 = n1 + n2;
    int merged[n3];
    
    // Copy elements of arr1
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    
    // Copy elements of arr2
    for(j = 0; j < n2; j++) {
        merged[i] = arr2[j];
        i++;
    }
    
    printf("Merged array: ");
    for(i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}

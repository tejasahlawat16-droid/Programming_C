/* Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    // Input matrix size
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i][i] == a[j][j]) {
                flag = 0; // duplicate found
                break;
            }
        }
        if(flag == 0)
            break;
    }

    // Output result
    if(flag == 1)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}

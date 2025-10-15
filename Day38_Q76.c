/* Check if a matrix is symmetric.
*/

#include <stdio.h>

int main() {
    int n;
    int matrix[50][50], isSymmetric = 1;

    // Input size of square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Display result
    if (isSymmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is NOT symmetric.\n");

    return 0;
}

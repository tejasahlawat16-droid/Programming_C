/* Perform diagonal traversal of a matrix.
*/

#include <stdio.h>

int main() {
    int n, i, j;

    // Input size of square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    // Input matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal: ");

    // Print upper half diagonals including main diagonal
    for (int d = 0; d < n; d++) {
        i = 0;
        j = d;
        while (j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    // Print lower half diagonals
    for (int d = 1; d < n; d++) {
        i = d;
        j = n - 1;
        while (i < n) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}

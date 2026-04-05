#include <stdio.h>

int main() {
    int m, n, x;
    printf("Enter rows and cols: ");
    scanf("%d %d", &m, &n);
    int mat[10][10];
    printf("Enter sorted matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Enter target: ");
    scanf("%d", &x);
    int low = 0, high = m * n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int r = mid / n;
        int c = mid % n;
        if (mat[r][c] == x) {
            printf("Found at %d, %d\n", r, c);
            return 0;
        }
        if (mat[r][c] < x) low = mid + 1;
        else high = mid - 1;
    }
    printf("Not found\n");
    return 0;
}

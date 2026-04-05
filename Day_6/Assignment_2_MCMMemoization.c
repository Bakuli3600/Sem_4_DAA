#include <stdio.h>
#include <limits.h>

int memo[101][101];

int mcm(int p[], int i, int j) {
    if (i == j) return 0;
    if (memo[i][j] != -1) return memo[i][j];
    int min = INT_MAX;
    for (int k = i; k < j; k++) {
        int count = mcm(p, i, k) + mcm(p, k + 1, j) + p[i - 1] * p[k] * p[j];
        if (count < min) min = count;
    }
    return memo[i][j] = min;
}

int main() {
    int n;
    printf("Enter number of matrices: ");
    scanf("%d", &n);
    int p[100];
    printf("Enter dimensions: ");
    for (int i = 0; i <= n; i++) scanf("%d", &p[i]);
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++) memo[i][j] = -1;
    printf("Min cost: %d\n", mcm(p, 1, n));
    return 0;
}

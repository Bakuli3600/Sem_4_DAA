#include <stdio.h>
#include <limits.h>

int mcm(int p[], int i, int j) {
    if (i == j) return 0;
    int min = INT_MAX;
    for (int k = i; k < j; k++) {
        int count = mcm(p, i, k) + mcm(p, k + 1, j) + p[i - 1] * p[k] * p[j];
        if (count < min) min = count;
    }
    return min;
}

int main() {
    int n;
    printf("Enter number of matrices: ");
    scanf("%d", &n);
    int p[100];
    printf("Enter dimensions: ");
    for (int i = 0; i <= n; i++) scanf("%d", &p[i]);
    printf("Min cost: %d\n", mcm(p, 1, n));
    return 0;
}

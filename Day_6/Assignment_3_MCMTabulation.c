#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of matrices: ");
    scanf("%d", &n);
    int p[101];
    printf("Enter dimensions: ");
    for (int i = 0; i <= n; i++) scanf("%d", &p[i]);
    int dp[101][101];
    for (int i = 1; i <= n; i++) dp[i][i] = 0;
    for (int L = 2; L <= n; L++) {
        for (int i = 1; i <= n - L + 1; i++) {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) {
                int q = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < dp[i][j]) dp[i][j] = q;
            }
        }
    }
    printf("Min cost: %d\n", dp[1][n]);
    return 0;
}

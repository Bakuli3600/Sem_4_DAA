#include <stdio.h>

int main() {
    int n, W;
    printf("Enter number of items and capacity: ");
    scanf("%d %d", &n, &W);
    int wt[100], val[100];
    printf("Enter weights: ");
    for (int i = 0; i < n; i++) scanf("%d", &wt[i]);
    printf("Enter values: ");
    for (int i = 0; i < n; i++) scanf("%d", &val[i]);
    int dp[101][101];
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) dp[i][w] = 0;
            else if (wt[i - 1] <= w) {
                int include = val[i - 1] + dp[i - 1][w - wt[i - 1]];
                int exclude = dp[i - 1][w];
                dp[i][w] = (include > exclude) ? include : exclude;
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    printf("Max value: %d\n", dp[n][W]);
    return 0;
}

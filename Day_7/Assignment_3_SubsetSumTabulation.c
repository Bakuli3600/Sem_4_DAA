#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, sum;
    printf("Enter size and target sum: ");
    scanf("%d %d", &n, &sum);
    int set[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &set[i]);
    bool dp[101][101];
    for (int i = 0; i <= n; i++) dp[i][0] = true;
    for (int j = 1; j <= sum; j++) dp[0][j] = false;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < set[i - 1]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = dp[i - 1][j] || dp[i - 1][j - set[i - 1]];
        }
    }
    if (dp[n][sum]) printf("Possible\n");
    else printf("Not possible\n");
    return 0;
}

#include <stdio.h>

int memo[101][101];

int isSubsetSum(int set[], int n, int sum) {
    if (sum == 0) return 1;
    if (n == 0) return 0;
    if (memo[n][sum] != -1) return memo[n][sum];
    if (set[n - 1] > sum) return memo[n][sum] = isSubsetSum(set, n - 1, sum);
    return memo[n][sum] = isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

int main() {
    int n, sum;
    printf("Enter size and target sum: ");
    scanf("%d %d", &n, &sum);
    int set[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &set[i]);
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= sum; j++) memo[i][j] = -1;
    if (isSubsetSum(set, n, sum)) printf("Possible\n");
    else printf("Not possible\n");
    return 0;
}

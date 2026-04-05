#include <stdio.h>

int knapsack(int W, int wt[], int val[], int n) {
    if (n == 0 || W == 0) return 0;
    if (wt[n - 1] > W) return knapsack(W, wt, val, n - 1);
    int include = val[n - 1] + knapsack(W - wt[n - 1], wt, val, n - 1);
    int exclude = knapsack(W, wt, val, n - 1);
    return (include > exclude) ? include : exclude;
}

int main() {
    int n, W;
    printf("Enter number of items and capacity: ");
    scanf("%d %d", &n, &W);
    int wt[100], val[100];
    printf("Enter weights: ");
    for (int i = 0; i < n; i++) scanf("%d", &wt[i]);
    printf("Enter values: ");
    for (int i = 0; i < n; i++) scanf("%d", &val[i]);
    printf("Max value: %d\n", knapsack(W, wt, val, n));
    return 0;
}

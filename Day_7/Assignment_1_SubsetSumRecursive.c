#include <stdio.h>
#include <stdbool.h>

bool isSubsetSum(int set[], int n, int sum) {
    if (sum == 0) return true;
    if (n == 0) return false;
    if (set[n - 1] > sum) return isSubsetSum(set, n - 1, sum);
    return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

int main() {
    int n, sum;
    printf("Enter size and target sum: ");
    scanf("%d %d", &n, &sum);
    int set[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &set[i]);
    if (isSubsetSum(set, n, sum)) printf("Possible\n");
    else printf("Not possible\n");
    return 0;
}

#include <stdio.h>

void subsetSum(int set[], int n, int sum, int currentSum, int index, int result[], int resSize) {
    if (currentSum == sum) {
        printf("Subset: ");
        for (int i = 0; i < resSize; i++) printf("%d ", result[i]);
        printf("\n");
        return;
    }
    for (int i = index; i < n; i++) {
        if (currentSum + set[i] <= sum) {
            result[resSize] = set[i];
            subsetSum(set, n, sum, currentSum + set[i], i + 1, result, resSize + 1);
        }
    }
}

int main() {
    int n, sum;
    printf("Enter size and target sum: ");
    scanf("%d %d", &n, &sum);
    int set[100], result[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &set[i]);
    subsetSum(set, n, sum, 0, 0, result, 0);
    return 0;
}

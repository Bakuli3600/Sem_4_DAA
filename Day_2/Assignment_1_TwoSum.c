#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter target sum: ");
    scanf("%d", &target);
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            printf("Indices: %d, %d\n", left, right);
            return 0;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    printf("No pair found\n");
    return 0;
}

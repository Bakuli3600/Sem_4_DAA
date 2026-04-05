#include <stdio.h>

int main() {
    int n, x, count = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter target: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) count++;
    }
    printf("Count: %d\n", count);
    return 0;
}

#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) return m;
        if (arr[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    int n, x;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter search element: ");
    scanf("%d", &x);
    int res = binarySearch(arr, 0, n - 1, x);
    if (res == -1) printf("Not found\n");
    else printf("Found at index %d\n", res);
    return 0;
}

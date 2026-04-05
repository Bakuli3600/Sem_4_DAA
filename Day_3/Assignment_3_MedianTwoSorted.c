#include <stdio.h>

double findMedian(int arr1[], int arr2[], int n1, int n2) {
    if (n1 > n2) return findMedian(arr2, arr1, n2, n1);
    int low = 0, high = n1;
    while (low <= high) {
        int cut1 = (low + high) / 2;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;
        int l1 = (cut1 == 0) ? -2147483648 : arr1[cut1 - 1];
        int l2 = (cut2 == 0) ? -2147483648 : arr2[cut2 - 1];
        int r1 = (cut1 == n1) ? 2147483647 : arr1[cut1];
        int r2 = (cut2 == n2) ? 2147483647 : arr2[cut2];
        if (l1 <= r2 && l2 <= r1) {
            if ((n1 + n2) % 2 == 0)
                return ( (l1 > l2 ? l1 : l2) + (r1 < r2 ? r1 : r2) ) / 2.0;
            else
                return (l1 > l2 ? l1 : l2);
        } else if (l1 > r2) high = cut1 - 1;
        else low = cut1 + 1;
    }
    return 0.0;
}

int main() {
    int n1, n2;
    printf("Enter sizes of two sorted arrays: ");
    scanf("%d %d", &n1, &n2);
    int arr1[100], arr2[100];
    printf("Enter first array: ");
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
    printf("Enter second array: ");
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);
    printf("Median: %.2f\n", findMedian(arr1, arr2, n1, n2));
    return 0;
}

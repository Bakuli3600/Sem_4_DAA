#include <stdio.h>

int findBitonic(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if ((mid == 0 || arr[mid] > arr[mid - 1]) && (mid == n - 1 || arr[mid] > arr[mid + 1]))
            return arr[mid];
        if (mid > 0 && arr[mid] < arr[mid - 1]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Bitonic Point: %d\n", findBitonic(arr, n));
    return 0;
}

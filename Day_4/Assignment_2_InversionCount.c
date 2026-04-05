#include <stdio.h>

int merge(int arr[], int temp[], int left, int mid, int right) {
    int i = left, j = mid, k = left, count = 0;
    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            count += (mid - i);
        }
    }
    while (i <= mid - 1) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    for (i = left; i <= right; i++) arr[i] = temp[i];
    return count;
}

int mergeSort(int arr[], int temp[], int left, int right) {
    int mid, count = 0;
    if (right > left) {
        mid = (right + left) / 2;
        count += mergeSort(arr, temp, left, mid);
        count += mergeSort(arr, temp, mid + 1, right);
        count += merge(arr, temp, left, mid + 1, right);
    }
    return count;
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100], temp[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Inversion Count: %d\n", mergeSort(arr, temp, 0, n - 1));
    return 0;
}

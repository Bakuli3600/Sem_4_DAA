#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a; *a = *b; *b = t;
}

int partition(int arr[], int l, int r) {
    int pivot = arr[r], i = l;
    for (int j = l; j < r; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

void quickSelect(int arr[], int l, int r, int k) {
    if (l <= r) {
        int p = partition(arr, l, r);
        if (p == k) return;
        if (p > k) quickSelect(arr, l, p - 1, k);
        else quickSelect(arr, p + 1, r, k);
    }
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int k = n / 2;
    quickSelect(arr, 0, n - 1, k);
    printf("Median: %d\n", arr[k]);
    if (k > 0) printf("Left neighbor: %d\n", arr[k - 1]);
    if (k < n - 1) {
        int min_idx = k + 1;
        for (int i = k + 2; i < n; i++)
            if (arr[i] < arr[min_idx]) min_idx = i;
        swap(&arr[k + 1], &arr[min_idx]);
        printf("Right neighbor: %d\n", arr[k + 1]);
    }
    return 0;
}

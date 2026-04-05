#include <stdio.h>
#include <limits.h>

typedef struct {
    int min1, min2, max1, max2;
} Result;

Result findMinMax(int arr[], int low, int high) {
    Result res;
    if (low == high) {
        res.min1 = res.max1 = arr[low];
        res.min2 = INT_MAX;
        res.max2 = INT_MIN;
        return res;
    }
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            res.min1 = arr[low]; res.min2 = arr[high];
            res.max1 = arr[high]; res.max2 = arr[low];
        } else {
            res.min1 = arr[high]; res.min2 = arr[low];
            res.max1 = arr[low]; res.max2 = arr[high];
        }
        return res;
    }
    int mid = (low + high) / 2;
    Result left = findMinMax(arr, low, mid);
    Result right = findMinMax(arr, mid + 1, high);
    
    if (left.min1 < right.min1) {
        res.min1 = left.min1;
        res.min2 = (left.min2 < right.min1) ? left.min2 : right.min1;
    } else {
        res.min1 = right.min1;
        res.min2 = (right.min2 < left.min1) ? right.min2 : left.min1;
    }
    
    if (left.max1 > right.max1) {
        res.max1 = left.max1;
        res.max2 = (left.max2 > right.max1) ? left.max2 : right.max1;
    } else {
        res.max1 = right.max1;
        res.max2 = (right.max2 > left.max1) ? right.max2 : left.max1;
    }
    return res;
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    Result res = findMinMax(arr, 0, n - 1);
    printf("Second smallest: %d\n", res.min2);
    printf("Second largest: %d\n", res.max2);
    return 0;
}

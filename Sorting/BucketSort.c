#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void bucketSort(int arr[], int n) {
    int max = arr[0];
    for(int i=1; i<n; i++) if(arr[i] > max) max = arr[i];
    int num_buckets = n;
    struct Node** buckets = (struct Node**)malloc(num_buckets * sizeof(struct Node*));
    for (int i = 0; i < num_buckets; i++) buckets[i] = NULL;
    for (int i = 0; i < n; i++) {
        int idx = (long long)arr[i] * num_buckets / (max + 1);
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        if (!buckets[idx] || buckets[idx]->data >= arr[i]) {
            newNode->next = buckets[idx];
            buckets[idx] = newNode;
        } else {
            struct Node* curr = buckets[idx];
            while (curr->next && curr->next->data < arr[i]) curr = curr->next;
            newNode->next = curr->next;
            curr->next = newNode;
        }
    }
    int k = 0;
    for (int i = 0; i < num_buckets; i++) {
        struct Node* curr = buckets[i];
        while (curr) {
            arr[k++] = curr->data;
            struct Node* temp = curr;
            curr = curr->next;
            free(temp);
        }
    }
    free(buckets);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    bucketSort(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

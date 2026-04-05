#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    int graph[100][100];
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    int parent[100], key[100];
    bool mstSet[100];
    for (int i = 0; i < n; i++) {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < n - 1; count++) {
        int min = INT_MAX, u;
        for (int v = 0; v < n; v++) {
            if (mstSet[v] == false && key[v] < min) {
                min = key[v];
                u = v;
            }
        }
        mstSet[u] = true;
        for (int v = 0; v < n; v++) {
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    printf("Edge \tWeight\n");
    for (int i = 1; i < n; i++) {
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
    }
    return 0;
}

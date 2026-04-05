#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int minDistance(int dist[], bool sptSet[], int n) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < n; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

int main() {
    int n, src;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    int graph[100][100];
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) scanf("%d", &graph[i][j]);
    printf("Enter source vertex: ");
    scanf("%d", &src);
    int dist[100];
    bool sptSet[100];
    for (int i = 0; i < n; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }
    dist[src] = 0;
    for (int count = 0; count < n - 1; count++) {
        int u = minDistance(dist, sptSet, n);
        sptSet[u] = true;
        for (int v = 0; v < n; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < n; i++) printf("%d \t\t %d\n", i, dist[i]);
    return 0;
}

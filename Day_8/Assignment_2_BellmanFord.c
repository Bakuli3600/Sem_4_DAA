#include <stdio.h>
#include <limits.h>

struct Edge {
    int u, v, w;
};

int main() {
    int n, e, src;
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &n, &e);
    struct Edge edges[100];
    printf("Enter edges (u v w):\n");
    for (int i = 0; i < e; i++) scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    printf("Enter source: ");
    scanf("%d", &src);
    int dist[100];
    for (int i = 0; i < n; i++) dist[i] = INT_MAX;
    dist[src] = 0;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 0; j < e; j++) {
            if (dist[edges[j].u] != INT_MAX && dist[edges[j].u] + edges[j].w < dist[edges[j].v])
                dist[edges[j].v] = dist[edges[j].u] + edges[j].w;
        }
    }
    for (int j = 0; j < e; j++) {
        if (dist[edges[j].u] != INT_MAX && dist[edges[j].u] + edges[j].w < dist[edges[j].v]) {
            printf("Graph contains negative weight cycle\n");
            return 0;
        }
    }
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < n; i++) printf("%d \t\t %d\n", i, dist[i]);
    return 0;
}

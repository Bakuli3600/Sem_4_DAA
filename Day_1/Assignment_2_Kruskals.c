#include <stdio.h>
#include <stdlib.h>

struct Edge {
    int u, v, w;
};

int find(int parent[], int i) {
    if (parent[i] == -1) return i;
    return find(parent, parent[i]);
}

void unionSets(int parent[], int x, int y) {
    int xset = find(parent, x);
    int yset = find(parent, y);
    if (xset != yset) parent[xset] = yset;
}

int compareEdges(const void* a, const void* b) {
    return ((struct Edge*)a)->w - ((struct Edge*)b)->w;
}

int main() {
    int n, e;
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &n, &e);
    struct Edge edges[100];
    printf("Enter edges (u v w):\n");
    for (int i = 0; i < e; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }
    qsort(edges, e, sizeof(struct Edge), compareEdges);
    int parent[100];
    for (int i = 0; i < n; i++) parent[i] = -1;
    printf("Edges in MST:\n");
    int count = 0, i = 0;
    while (count < n - 1 && i < e) {
        int x = find(parent, edges[i].u);
        int y = find(parent, edges[i].v);
        if (x != y) {
            printf("%d - %d: %d\n", edges[i].u, edges[i].v, edges[i].w);
            unionSets(parent, x, y);
            count++;
        }
        i++;
    }
    return 0;
}

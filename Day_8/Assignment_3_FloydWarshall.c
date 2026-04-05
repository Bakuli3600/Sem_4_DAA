#include <stdio.h>
#include <limits.h>

#define INF 99999

int main() {
    int n;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    int dist[10][10];
    printf("Enter adjacency matrix (use 99999 for INF):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) scanf("%d", &dist[i][j]);
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    printf("Shortest distances matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF) printf("INF ");
            else printf("%d ", dist[i][j]);
        }
        printf("\n");
    }
    return 0;
}

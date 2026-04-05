#include <stdio.h>
#include <stdlib.h>

int adj[100][100];
int visited[100];
int queue[100];
int front = -1, rear = -1;

void enqueue(int v) {
    if (rear == 99) return;
    if (front == -1) front = 0;
    queue[++rear] = v;
}

int dequeue() {
    if (front == -1 || front > rear) return -1;
    return queue[front++];
}

void bfs(int n, int start) {
    for (int i = 0; i < n; i++) visited[i] = 0;
    enqueue(start);
    visited[start] = 1;
    while (front <= rear && front != -1) {
        int v = dequeue();
        printf("%d ", v);
        for (int i = 0; i < n; i++) {
            if (adj[v][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

void dfs(int n, int v) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (adj[v][i] && !visited[i]) {
            dfs(n, i);
        }
    }
}

int main() {
    int n, start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("Enter start vertex: ");
    scanf("%d", &start);
    printf("BFS: ");
    bfs(n, start);
    for (int i = 0; i < n; i++) visited[i] = 0;
    printf("DFS: ");
    dfs(n, start);
    printf("\n");
    return 0;
}

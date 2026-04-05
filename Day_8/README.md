# Day 8: Shortest Path Algorithms

## How to Run
Compile: `gcc <filename>.c -o <output_name>`
Run: `./<output_name>`

## Assignments

### 1. Dijkstra's Algorithm
- **Algorithm:** Finds the shortest path from a source vertex to all other vertices in a weighted graph with non-negative edge weights using a greedy approach.
- **Example Input:**
  ```
  Enter number of vertices: 3
  Enter adjacency matrix:
  0 1 5
  1 0 2
  5 2 0
  Enter source vertex: 0
  ```
- **Example Output:**
  ```
  Vertex   Distance from Source
  0        0
  1        1
  2        3
  ```
- **Time Complexity:** $O(V^2)$ for adjacency matrix
- **Space Complexity:** $O(V)$

### 2. Bellman-Ford Algorithm
- **Algorithm:** Computes shortest paths from a single source vertex to all other vertices in a weighted graph, even with negative edge weights (provided no negative cycles exist).
- **Example Input:**
  ```
  Enter number of vertices and edges: 3 3
  Enter edges (u v weight):
  0 1 -1
  1 2 3
  0 2 4
  Enter source vertex: 0
  ```
- **Example Output:**
  ```
  Vertex   Distance from Source
  0        0
  1        -1
  2        2
  ```
- **Time Complexity:** $O(V \cdot E)$
- **Space Complexity:** $O(V)$

### 3. Floyd-Warshall Algorithm
- **Algorithm:** Finds the shortest paths between all pairs of vertices in a weighted graph by iteratively updating the shortest paths using each vertex as an intermediate node.
- **Example Input:**
  ```
  Enter number of vertices: 3
  Enter adjacency matrix (999 for INF):
  0 4 11
  6 0 2
  3 999 0
  ```
- **Example Output:**
  ```
  Shortest Distance Matrix:
  0 4 6
  5 0 2
  3 7 0
  ```
- **Time Complexity:** $O(V^3)$
- **Space Complexity:** $O(V^2)$

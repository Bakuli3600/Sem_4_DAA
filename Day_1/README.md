# Day 1: Graph Algorithms

## How to Run
Compile: `gcc <filename>.c -o <output_name>`
Run: `./<output_name>`

## Assignments

### 1. BFS and DFS Traversal
- **Algorithm:** Breadth-First Search (BFS) uses a queue to explore neighbors level by level. Depth-First Search (DFS) uses recursion (stack) to explore as far as possible along each branch.
- **Example Input:**
  ```
  Enter number of vertices: 4
  Enter adjacency matrix:
  0 1 1 0
  1 0 0 1
  1 0 0 1
  0 1 1 0
  Enter start vertex: 0
  ```
- **Example Output:**
  ```
  BFS: 0 1 2 3
  DFS: 0 1 3 2
  ```
- **Time Complexity:** $O(V + E)$
- **Space Complexity:** $O(V)$

### 2. Kruskal's Algorithm
- **Algorithm:** A greedy algorithm that finds a Minimum Spanning Tree (MST) by sorting all edges and adding them one by one if they don't form a cycle (using Disjoint Set Union).
- **Example Input:**
  ```
  Enter number of vertices and edges: 4 5
  Enter edges (u v weight):
  0 1 10
  0 2 6
  0 3 5
  1 3 15
  2 3 4
  ```
- **Example Output:**
  ```
  Edge: 2 - 3 Weight: 4
  Edge: 0 - 3 Weight: 5
  Edge: 0 - 1 Weight: 10
  Total MST weight: 19
  ```
- **Time Complexity:** $O(E \log E)$ or $O(E \log V)$
- **Space Complexity:** $O(V + E)$

### 3. Prim's Algorithm
- **Algorithm:** A greedy algorithm that builds the MST by starting from an arbitrary vertex and repeatedly adding the cheapest edge from the tree to a vertex not yet in the tree.
- **Example Input:**
  ```
  Enter number of vertices: 4
  Enter adjacency matrix:
  0 10 6 5
  10 0 0 15
  6 0 0 4
  5 15 4 0
  ```
- **Example Output:**
  ```
  Edge 0 - 3: 5
  Edge 3 - 2: 4
  Edge 0 - 1: 10
  ```
- **Time Complexity:** $O(V^2)$ for adjacency matrix
- **Space Complexity:** $O(V)$

# Day 9: Hard Problems and Backtracking

## How to Run
Compile: `gcc <filename>.c -o <output_name>`
Run: `./<output_name>`

## Assignments

### 1. Traveling Salesman Problem (TSP)
- **Algorithm:** Uses Dynamic Programming with bitmasking to find the shortest possible route that visits every city exactly once and returns to the starting city.
- **Example Input:**
  ```
  Enter number of cities: 4
  Enter distance matrix:
  0 10 15 20
  5 0 9 10
  6 13 0 12
  8 8 9 0
  ```
- **Example Output:**
  ```
  Minimum distance: 35
  ```
- **Time Complexity:** $O(2^n \cdot n^2)$
- **Space Complexity:** $O(2^n \cdot n)$

### 2. N-Queen Problem
- **Algorithm:** Uses backtracking to place $N$ queens on an $N \times N$ chessboard such that no two queens threaten each other.
- **Example Input:**
  ```
  Enter N: 4
  ```
- **Example Output:**
  ```
  . Q . . 
  . . . Q 
  Q . . . 
  . . Q . 

  . . Q . 
  Q . . . 
  . . . Q 
  . Q . . 
  ```
- **Time Complexity:** $O(N!)$
- **Space Complexity:** $O(N)$

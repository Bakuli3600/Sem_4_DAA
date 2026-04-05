# Day 6: Dynamic Programming - Matrix Chain Multiplication

## How to Run
Compile: `gcc <filename>.c -o <output_name>`
Run: `./<output_name>`

## Assignments

### 1. MCM (Recursive)
- **Algorithm:** Brute force recursive approach to find the minimum number of scalar multiplications needed to multiply a chain of matrices.
- **Example Input:**
  ```
  Enter number of matrices: 3
  Enter dimensions: 10 30 5 60
  ```
- **Example Output:**
  ```
  Min cost: 4500
  ```
- **Time Complexity:** Exponential
- **Space Complexity:** $O(n)$

### 2. MCM (Memoization)
- **Algorithm:** Top-down DP approach that stores results of optimal multiplication costs for matrix sub-chains.
- **Example Input:** (Same as Recursive)
- **Example Output:** (Same as Recursive)
- **Time Complexity:** $O(n^3)$
- **Space Complexity:** $O(n^2)$

### 3. MCM (Tabulation)
- **Algorithm:** Bottom-up DP approach that iteratively computes the minimum cost for chains of increasing length.
- **Example Input:** (Same as Recursive)
- **Example Output:** (Same as Recursive)
- **Time Complexity:** $O(n^3)$
- **Space Complexity:** $O(n^2)$

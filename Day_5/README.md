# Day 5: Dynamic Programming - 0/1 Knapsack

## How to Run
Compile: `gcc <filename>.c -o <output_name>`
Run: `./<output_name>`

## Assignments

### 1. 0/1 Knapsack (Recursive)
- **Algorithm:** Brute force recursive approach exploring all combinations of including or excluding an item.
- **Example Input:**
  ```
  Enter number of items and capacity: 3 50
  Enter weights: 10 20 30
  Enter values: 60 100 120
  ```
- **Example Output:**
  ```
  Max value: 220
  ```
- **Time Complexity:** $O(2^n)$
- **Space Complexity:** $O(n)$ (recursion stack)

### 2. 0/1 Knapsack (Memoization)
- **Algorithm:** Optimizes the recursive approach by storing results of subproblems in a table to avoid redundant calculations.
- **Example Input:** (Same as Recursive)
- **Example Output:** (Same as Recursive)
- **Time Complexity:** $O(n \cdot W)$
- **Space Complexity:** $O(n \cdot W)$

### 3. 0/1 Knapsack (Tabulation)
- **Algorithm:** Bottom-up approach that fills a 2D table iteratively to find the maximum value.
- **Example Input:** (Same as Recursive)
- **Example Output:** (Same as Recursive)
- **Time Complexity:** $O(n \cdot W)$
- **Space Complexity:** $O(n \cdot W)$

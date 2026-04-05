# Day 7: Subset Sum Problem

## How to Run
Compile: `gcc <filename>.c -o <output_name>`
Run: `./<output_name>`

## Assignments

### 1. Subset Sum (Recursive)
- **Algorithm:** Explores all possible subsets of an array recursively to see if any subset's elements sum up to a target value.
- **Example Input:**
  ```
  Enter size and target sum: 4 9
  Enter elements: 3 34 4 12
  ```
- **Example Output:**
  ```
  Possible
  ```
- **Time Complexity:** $O(2^n)$
- **Space Complexity:** $O(n)$

### 2. Subset Sum (Memoization)
- **Algorithm:** Top-down DP that optimizes the recursive approach using a 2D table to store results of subproblems $(i, \text{current\_sum})$.
- **Example Input:** (Same as Recursive)
- **Example Output:** (Same as Recursive)
- **Time Complexity:** $O(n \cdot \text{sum})$
- **Space Complexity:** $O(n \cdot \text{sum})$

### 3. Subset Sum (Tabulation)
- **Algorithm:** Bottom-up DP approach that iteratively fills a 2D boolean table to determine if a target sum is achievable.
- **Example Input:** (Same as Recursive)
- **Example Output:** (Same as Recursive)
- **Time Complexity:** $O(n \cdot \text{sum})$
- **Space Complexity:** $O(n \cdot \text{sum})$

### 4. Subset Sum (Backtracking)
- **Algorithm:** Uses backtracking to find a subset that sums to the target, pruning the search space when the current sum exceeds the target.
- **Example Input:** (Same as Recursive)
- **Example Output:** (Same as Recursive)
- **Time Complexity:** $O(2^n)$
- **Space Complexity:** $O(n)$

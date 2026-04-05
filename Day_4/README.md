# Day 4: Divide and Conquer

## How to Run
Compile: `gcc <filename>.c -o <output_name>`
Run: `./<output_name>`

## Assignments

### 1. Bitonic Point
- **Algorithm:** Uses binary search to find the maximum element in a bitonic array (an array that first increases and then decreases).
- **Example Input:**
  ```
  Enter size: 5
  Enter elements: 1 3 8 12 4
  ```
- **Example Output:**
  ```
  Bitonic Point: 12
  ```
- **Time Complexity:** $O(\log n)$
- **Space Complexity:** $O(1)$

### 2. Inversion Count
- **Algorithm:** Uses a modified Merge Sort to count the number of inversions in an array. An inversion is a pair $(i, j)$ such that $i < j$ and $arr[i] > arr[j]$.
- **Example Input:**
  ```
  Enter size: 5
  Enter elements: 2 4 1 3 5
  ```
- **Example Output:**
  ```
  Inversion Count: 3
  ```
- **Time Complexity:** $O(n \log n)$
- **Space Complexity:** $O(n)$

### 3. Quick Select Neighbors
- **Algorithm:** Uses the QuickSelect partition logic to find the $K$-th smallest element and identify its nearest neighbors.
- **Example Input:**
  ```
  Enter size and K: 5 2
  Enter elements: 12 3 5 7 19
  ```
- **Example Output:**
  ```
  K-th smallest: 7
  Neighbors: 5, 12 (depending on implementation details)
  ```
- **Time Complexity:** $O(n)$ average, $O(n^2)$ worst case
- **Space Complexity:** $O(n)$

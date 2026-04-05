# Day 3: Advanced Binary Search

## How to Run
Compile: `gcc <filename>.c -o <output_name>`
Run: `./<output_name>`

## Assignments

### 1. 2D Binary Search
- **Algorithm:** Searches for a target in a row-wise and column-wise sorted matrix by treating it as a flattened 1D array.
- **Example Input:**
  ```
  Enter rows and cols: 3 3
  Enter sorted matrix:
  1 3 5
  7 9 11
  13 15 17
  Enter target: 9
  ```
- **Example Output:**
  ```
  Found at 1, 1
  ```
- **Time Complexity:** $O(\log(m \cdot n))$
- **Space Complexity:** $O(1)$

### 2. Count Occurrences
- **Algorithm:** Uses binary search twice to find the first and last occurrence of a number in a sorted array to calculate the total count.
- **Example Input:**
  ```
  Enter size: 7
  Enter sorted elements: 1 2 2 2 2 3 4
  Enter target: 2
  ```
- **Example Output:**
  ```
  Count: 4
  ```
- **Time Complexity:** $O(\log n)$
- **Space Complexity:** $O(1)$

### 3. Median of Two Sorted Arrays
- **Algorithm:** Uses a binary search based approach to partition two sorted arrays such that the left half and right half have the same size and the max of the left is less than the min of the right.
- **Example Input:**
  ```
  Enter size of arr1: 2
  Enter elements: 1 3
  Enter size of arr2: 1
  Enter elements: 2
  ```
- **Example Output:**
  ```
  Median: 2.00
  ```
- **Time Complexity:** $O(\log(\min(m, n)))$
- **Space Complexity:** $O(1)$

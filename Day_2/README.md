# Day 2: Basic Search and Arrays

## How to Run
Compile: `gcc <filename>.c -o <output_name>`
Run: `./<output_name>`

## Assignments

### 1. Two Sum
- **Algorithm:** Finds two indices in a sorted array such that the elements at those indices add up to a target sum using the two-pointer approach.
- **Example Input:**
  ```
  Enter size of sorted array: 5
  Enter sorted elements: 1 2 4 6 7
  Enter target sum: 10
  ```
- **Example Output:**
  ```
  Indices: 2, 3
  ```
- **Time Complexity:** $O(n)$ for sorted array (two pointers)
- **Space Complexity:** $O(1)$

### 2. Binary Search
- **Algorithm:** Finds the position of a target value within a sorted array by repeatedly dividing the search interval in half.
- **Example Input:**
  ```
  Enter size: 5
  Enter sorted elements: 10 20 30 40 50
  Enter target: 30
  ```
- **Example Output:**
  ```
  Found at index: 2
  ```
- **Time Complexity:** $O(\log n)$
- **Space Complexity:** $O(1)$

### 3. Second Minimum and Maximum
- **Algorithm:** Scans the array once to find the second smallest and second largest elements by maintaining four variables.
- **Example Input:**
  ```
  Enter size: 5
  Enter elements: 12 35 1 10 34
  ```
- **Example Output:**
  ```
  Second Min: 10
  Second Max: 34
  ```
- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(1)$

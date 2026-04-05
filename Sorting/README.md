# Sorting Algorithms in C

This directory contains implementations of various sorting algorithms in C.

## Compilation and Execution

To compile a sorting algorithm, use a C compiler like `gcc`:

```bash
gcc FileName.c -o FileName
```

To execute the compiled program:

```bash
./FileName
```

### Input Format
The programs expect the following input format:
1. An integer `n` representing the number of elements.
2. `n` space-separated integers representing the array elements.

---

## Algorithms

### 1. Bubble Sort
- **Explanation**: Repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
- **Example Input**: `5 \n 5 4 3 2 1`
- **Example Output**: `1 2 3 4 5`
- **Time Complexity**:
  - Best: O(n) (with optimization) / O(n²)
  - Average: O(n²)
  - Worst: O(n²)
- **Space Complexity**: O(1)

### 2. Selection Sort
- **Explanation**: Repeatedly finds the minimum element from the unsorted part and puts it at the beginning.
- **Example Input**: `5 \n 64 25 12 22 11`
- **Example Output**: `11 12 22 25 64`
- **Time Complexity**:
  - Best: O(n²)
  - Average: O(n²)
  - Worst: O(n²)
- **Space Complexity**: O(1)

### 3. Insertion Sort
- **Explanation**: Builds the final sorted array one item at a time by inserting elements into their correct position.
- **Example Input**: `5 \n 12 11 13 5 6`
- **Example Output**: `5 6 11 12 13`
- **Time Complexity**:
  - Best: O(n)
  - Average: O(n²)
  - Worst: O(n²)
- **Space Complexity**: O(1)

### 4. Merge Sort
- **Explanation**: A divide and conquer algorithm that divides the array into two halves, sorts them, and then merges the sorted halves.
- **Example Input**: `6 \n 12 11 13 5 6 7`
- **Example Output**: `5 6 7 11 12 13`
- **Time Complexity**:
  - Best: O(n log n)
  - Average: O(n log n)
  - Worst: O(n log n)
- **Space Complexity**: O(n)

### 5. Quick Sort
- **Explanation**: Picks an element as pivot and partitions the given array around the picked pivot.
- **Example Input**: `6 \n 10 7 8 9 1 5`
- **Example Output**: `1 5 7 8 9 10`
- **Time Complexity**:
  - Best: O(n log n)
  - Average: O(n log n)
  - Worst: O(n²)
- **Space Complexity**: O(log n)

### 6. Heap Sort
- **Explanation**: Comparison-based sorting technique based on Binary Heap data structure.
- **Example Input**: `5 \n 4 10 3 5 1`
- **Example Output**: `1 3 4 5 10`
- **Time Complexity**:
  - Best: O(n log n)
  - Average: O(n log n)
  - Worst: O(n log n)
- **Space Complexity**: O(1)

### 7. Counting Sort
- **Explanation**: Non-comparison-based sorting technique that operates by counting the number of objects having distinct key values.
- **Example Input**: `7 \n 1 4 1 2 7 5 2`
- **Example Output**: `1 1 2 2 4 5 7`
- **Time Complexity**:
  - Best: O(n + k)
  - Average: O(n + k)
  - Worst: O(n + k)
  - (where k is the range of input)
- **Space Complexity**: O(k)

### 8. Radix Sort
- **Explanation**: Avoids comparison by creating and distributing elements into buckets according to their radix.
- **Example Input**: `8 \n 170 45 75 90 802 24 2 66`
- **Example Output**: `2 24 45 66 75 90 170 802`
- **Time Complexity**:
  - Best: O(nk)
  - Average: O(nk)
  - Worst: O(nk)
- **Space Complexity**: O(n + k)

### 9. Bucket Sort
- **Explanation**: Distributes the elements of an array into a number of buckets. Each bucket is then sorted individually.
- **Example Input**: `5 \n 78 17 39 26 72`
- **Example Output**: `17 26 39 72 78`
- **Time Complexity**:
  - Best: O(n + k)
  - Average: O(n + k)
  - Worst: O(n²)
- **Space Complexity**: O(n)

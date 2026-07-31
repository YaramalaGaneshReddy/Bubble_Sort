# Selection Sort Algorithm in C++

This repository contains the C++ implementation of the **Selection Sort** algorithm, developed as part of practical assignments.

## 📌 Description
Selection Sort is a simple comparison-based sorting algorithm. It works by dividing the array into two parts:
1. The sorted subarray (initially empty).
2. The unsorted subarray (contains all elements initially).

In each iteration, the algorithm finds the minimum element from the unsorted subarray and swaps it with the leftmost unsorted element, moving the subarray boundaries one element to the right.

## 🚀 How to Run

### Prerequisites
- GCC / G++ Compiler installed.

### Compilation
```bash
g++ program.cpp -o program
```

### Execution
```bash
./program
```

### Input Format
1. Enter the number of elements `N`.
2. Enter `N` space-separated integers.

### Example
**Input:**
```
5
64 25 12 22 11
```

**Output:**
```
11 12 22 25 64 
```

## ⏱️ Complexity
- **Time Complexity:** 
  - Best Case: $\mathcal{O}(n^2)$
  - Average Case: $\mathcal{O}(n^2)$
  - Worst Case: $\mathcal{O}(n^2)$
- **Space Complexity:** $\mathcal{O}(1)$ (In-place sorting)
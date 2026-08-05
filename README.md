# Bubble Sort Algorithm in C++

This repository contains the optimized C++ implementation of the **Bubble Sort** algorithm.

## 📌 Description
Bubble Sort is a simple comparison-based sorting algorithm. It works by repeatedly stepping through the list, comparing adjacent elements and swapping them if they are in the wrong order. Pass through the list is repeated until the list is sorted.

## 🚀 How to Run

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
6
64 34 25 12 22 11
```

**Output:**
```
11 12 22 25 34 64 
```

## ⏱️ Complexity
- **Time Complexity:** 
  - Best Case: $\mathcal{O}(n)$ (when already sorted)
  - Average Case: $\mathcal{O}(n^2)$
  - Worst Case: $\mathcal{O}(n^2)$
- **Space Complexity:** $\mathcal{O}(1)$ (In-place sorting)
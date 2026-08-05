# Insertion Sort Algorithm in C++

This repository contains the C++ implementation of the **Insertion Sort** algorithm.

## 📌 Description
Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array one item at a time. It works by taking elements from the unsorted part and inserting them into their correct position in the sorted part.

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
5
12 11 13 5 6
```

**Output:**
```
5 6 11 12 13 
```

## ⏱️ Complexity
- **Time Complexity:** 
  - Best Case: $\mathcal{O}(n)$ (when already sorted)
  - Average Case: $\mathcal{O}(n^2)$
  - Worst Case: $\mathcal{O}(n^2)$
- **Space Complexity:** $\mathcal{O}(1)$ (In-place sorting)
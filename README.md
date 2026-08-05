# Bubble Sort Algorithm in C++

This repository contains the C++ implementation of the **Bubble Sort** algorithm.

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

### Code
```cpp
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n){
    for(int i = n-1; i >= 1; i--)
    {
        for(int j = 0; j <= i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    bubblesort(arr,n);
    for(auto x: arr){
        cout << x << " ";
    }
        return 0;
}
```

## ⏱️ Complexity
- **Time Complexity:** 
  - Best Case: $\mathcal{O}(n)$
  - Average Case: $\mathcal{O}(n^2)$
  - Worst Case: $\mathcal{O}(n^2)$
- **Space Complexity:** $\mathcal{O}(1)$ (In-place sorting)
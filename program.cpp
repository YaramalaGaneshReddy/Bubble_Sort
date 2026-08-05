#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void selectionsort(vector<int>& arr, int n) {
    for (int i = 0; i <= n - 2; i++) {
        int min_index = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // swap arr[i] and arr[min_index]
        swap(arr[i], arr[min_index]);
    }
}

int main() {
    int n;
    if (cin >> n) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        selectionsort(arr, n);
        for (auto x : arr) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
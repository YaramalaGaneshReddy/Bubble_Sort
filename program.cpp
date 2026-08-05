#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void bubblesort(vector<int>& arr, int n) {
    for (int i = n - 1; i >= 1; i--) {
        bool swapped = false;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int n;
    if (cin >> n) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        bubblesort(arr, n);
        for (auto x : arr) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
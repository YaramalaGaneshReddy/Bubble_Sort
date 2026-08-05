#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void insertionsort(vector<int>& arr, int n) {
    for (int i = 1; i <= n - 1; i++) {
        int j = i;
        while (j >= 1 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main() {
    int n;
    if (cin >> n) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        insertionsort(arr, n);
        for (auto x : arr) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
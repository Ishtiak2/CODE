#include <bits/stdc++.h>
using namespace std;

// Recursive reverse with two pointers (start and end)
void reverseTwoPointers(int l, int r, int arr[]) {
    if (l >= r) return;
    swap(arr[l], arr[r]);
    reverseTwoPointers(l + 1, r - 1, arr);
}

// Recursive reverse with a single pointer
void reverseSinglePointer(int i, int arr[], int n) {
    if (i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    reverseSinglePointer(i + 1, arr, n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Reverse using two pointers
    reverseTwoPointers(0, n - 1, arr);
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << '\n';

    // Reverse again using single pointer to get original array back
    reverseSinglePointer(0, arr, n);
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << '\n';

    return 0;
}

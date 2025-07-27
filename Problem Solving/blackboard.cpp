#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {2, 5, 1, 4, 9, 3};
    int n = arr.size();

    vector<int> prefixMax(n), suffixMax(n);
    vector<int> prefixMin(n), suffixMin(n);

    // Prefix max and min
    prefixMax[0] = arr[0];
    prefixMin[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefixMax[i] = max(prefixMax[i - 1], arr[i]);
        prefixMin[i] = min(prefixMin[i - 1], arr[i]);
    }

    // Suffix max and min
    suffixMax[n - 1] = arr[n - 1];
    suffixMin[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        suffixMax[i] = max(suffixMax[i + 1], arr[i]);
        suffixMin[i] = min(suffixMin[i + 1], arr[i]);
    }

    // Output results
    cout << "Prefix Max: ";
    for (int x : prefixMax) cout << x << " ";
    cout << "\nPrefix Min: ";
    for (int x : prefixMin) cout << x << " ";
    cout << "\nSuffix Max: ";
    for (int x : suffixMax) cout << x << " ";
    cout << "\nSuffix Min: ";
    for (int x : suffixMin) cout << x << " ";

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

// Custom comparator function for descending order
bool cmp(int a, int b) {
    return a > b;  // If a is greater, it comes first
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 3};

    // Sorting in descending order using cmp
    sort(arr.begin(), arr.end(), cmp);

    // Printing sorted array
    for (int num : arr)
        cout << num << " "; 

    return 0;
}

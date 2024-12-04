#include <bits/stdc++.h>

using namespace std;

// Function to find the lower bound
int lower_bound(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target) {
            low = mid + 1; // Move right
        } else {
            high = mid - 1; // Move left
        }
    }
    return low; // The position of the first element not less than target
}

// Function to find the upper bound
int upper_bound(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            low = mid + 1; // Move right
        } else {
            high = mid - 1; // Move left
        }
    }
    return low; // The position of the first element greater than target
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 5, 6, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 5;
    int lb = lower_bound(arr, n, target);
    int ub = upper_bound(arr, n, target);

    cout << "Lower bound of " << target << " is at position: " << lb << endl;
    cout << "Upper bound of " << target << " is at position: " << ub << endl;

    target = 3;
    lb = lower_bound(arr, n, target);
    ub = upper_bound(arr, n, target);

    cout << "Lower bound of " << target << " is at position: " << lb << endl;
    cout << "Upper bound of " << target << " is at position: " << ub << endl;

    target = 8;
    lb = lower_bound(arr, n, target);
    ub = upper_bound(arr, n, target);

    cout << "Lower bound of " << target << " is at position: " << lb << endl;
    cout << "Upper bound of " << target << " is at position: " << ub << endl;

    return 0;
}

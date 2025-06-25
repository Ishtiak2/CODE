#include <bits/stdc++.h>
using namespace std;

// Custom comparator function to sort pairs by second value in descending order
bool cmpDesc(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;  // Higher value comes first
}

// Custom comparator function to sort pairs by second value in ascending order
bool cmpAsc(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second;  // Lower value comes first
}

int main() {
    // Initializing a vector of pairs
    vector<pair<string, int>> a = {{"ab", 3}, {"cd", 5}, {"as", 2}, {"fg", 4}};

    // Printing the original vector
    cout << "Original Vector:" << endl;
    for (const auto& it : a) {
        cout << it.first << " " << it.second << endl;
    }

    // Sorting the vector using the custom comparator (descending order)
    sort(a.begin(), a.end(), cmpDesc);

    // Printing the sorted vector
    cout << "\nSorted Vector (by second value in descending order):" << endl;
    for (const auto& it : a) {
        cout << it.first << " " << it.second << endl;
    }

    // Sorting the vector using the custom comparator (ascending order)
    sort(a.begin(), a.end(), cmpAsc);

    // Printing the sorted vector
    cout << "\nSorted Vector (by second value in ascending order):" << endl;
    for (const auto& it : a) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}

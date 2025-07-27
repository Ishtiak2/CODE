#include <iostream>
#include <bitset>
using namespace std;

// Method 1: Print full 32-bit binary with leading zeros
void printBinary(int n) {
    for (int i = 31; i >= 0; --i) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

// Method 2: Print binary without leading zeros (compact form)
void printBinaryCompact(int n) {
    bool leading = true;
    for (int i = 31; i >= 0; --i) {
        int bit = (n >> i) & 1;
        if (bit) leading = false;
        if (!leading) cout << bit;
    }
    if (leading) cout << "0"; // If n == 0
    cout << endl;
}

int main() {
    int num = 290;

    cout << "Full 32-bit binary of " << num << ": ";
    printBinary(num);

    cout << "Compact binary of " << num << ": ";
    printBinaryCompact(num);

    // Optional: Using C++ STL bitset
    cout << "Using bitset: " << bitset<32>(num) << endl;

    return 0;
}

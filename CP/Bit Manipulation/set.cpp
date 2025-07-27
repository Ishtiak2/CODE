#include <iostream>
using namespace std;

// Set the i-th bit (make it 1)
int setBit(int n, int i) {
    return n | (1 << i);
}

// Unset the i-th bit (make it 0)
int unsetBit(int n, int i) {
    return n & ~(1 << i);
}

// Toggle the i-th bit (flip 0<->1)
int toggleBit(int n, int i) {
    return n ^ (1 << i);
}

// Count number of set bits (1s)
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += (n & 1); // Add 1 if last bit is set
        n >>= 1;          // Right shift to check next bit
    }
    return count;
}

// Print binary (32-bit)
void printBinary(int n) {
    for (int i = 31; i >= 0; --i) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main() {
    int n = 13; // Binary: 00000000000000000000000000001101
    cout << "Original: ";
    printBinary(n);

    // Set 1st bit (which is already 0): n = 13 → 15
    n = setBit(n, 1);
    cout << "After setting bit 1: ";
    printBinary(n); // Should print 000000...00001111

    // Unset 3rd bit (which is 1): n = 15 → 7
    n = unsetBit(n, 3);
    cout << "After unsetting bit 3: ";
    printBinary(n); // Should print 000000...00000111

    // Toggle 2nd bit (which is 1): n = 7 → 3
    n = toggleBit(n, 2);
    cout << "After toggling bit 2: ";
    printBinary(n); // Should print 000000...00000011

    // Toggle 5th bit (which is 0): n = 3 → 35
    n = toggleBit(n, 5);
    cout << "After toggling bit 5: ";
    printBinary(n); // Should print 000000...00100011

    // Count set bits
    int count = countSetBits(n);
    cout << "Number of set bits: " << count << endl;

    return 0;
}

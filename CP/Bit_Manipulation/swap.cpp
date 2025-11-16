#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swapping using XOR
    a = a ^ b;
    b = a ^ b; // Now b = (a ^ b) ^ b = a
    a = a ^ b; // Now a = (a ^ b) ^ a = b

    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

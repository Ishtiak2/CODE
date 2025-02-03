#include <iostream>
#include <cmath> // For fmod

int main() {
    double a = 10.0, b = 2.0;

    // Using fmod to calculate the remainder
    double remainder = fmod(a, b);

    std::cout << "Remainder of " << a << " % " << b << " is: " << remainder << std::endl;

    return 0;
}

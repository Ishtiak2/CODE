#include <bits/stdc++.h>
using namespace std;

double f(double x, double y) {
    return x * y;
}

int main() {
    double x = 1.0;
    double y = 1.0;
    double h = 0.1;
    double xf = 1.3;


    while (x < xf) {
        y = y + (h / 2.0) * ( f(x, y) + f(x + h, y + h * f(x, y)) );
        x = x + h;
        cout << x << "   " << y << endl;
    }

    cout << "Approximate value of y at x = " << x << " is " << y << endl;
    return 0;
}

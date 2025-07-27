#include <iostream>
#include <cmath>
using namespace std;

// Function definition
double f(double x) {
    return -25 + 82*x - 90*pow(x,2) + 44*pow(x,3) - 8*pow(x,4) + 0.7*pow(x,5);
}

int main() {
    double xl = 0.5, xu = 1.0, xr = 0, xr_old, ea = 100;
    double es = 0.2; // Stopping criterion in percentage
    int iter = 0;

    cout << "Iter\txl\t\txu\t\txr\t\tf(xr)\t\tEa(%)\n";
    cout << "---------------------------------------------------------------\n";

    while (ea > es) {
        xr_old = xr;
        xr = xu - (f(xu) * (xl - xu)) / (f(xl) - f(xu)); // False-position formula
        double fxr = f(xr);

        iter++;
        if (xr != 0)
            ea = fabs((xr - xr_old) / xr) * 100;

        cout << iter << "\t" << xl << "\t" << xu << "\t" << xr << "\t" << fxr << "\t\t";
        if (iter == 1) cout << "----" << endl;
        else cout << ea << endl;

        // Update bounds
        if (f(xl) * fxr < 0)
            xu = xr;
        else
            xl = xr;
    }

    cout << "\nApproximate Root = " << xr << endl;
    return 0;
}

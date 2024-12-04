#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the number of rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Dynamically allocate memory for the 2D array
    int** arr = new int*[rows];  // Array of pointers to rows
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];  // Each row is an array of columns
    }

    // Input elements of the array
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Output elements of the array
    cout << "The 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];  // Delete each row
    }
    delete[] arr;  // Delete the array of row pointers

    return 0;
}

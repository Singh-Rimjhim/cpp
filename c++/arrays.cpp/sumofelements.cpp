#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols], sum = 0;

    cout << "Enter elements of 2-D array: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];   // add each element
        }
    }

    cout << "Sum of 2-D array elements = " << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int arr[7] = {6, 5, 7, 2, 1, 8, 7};
    int n = 7;
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at position: " << i + 1 << endl;
            found = 1;
            break;
        }
    }
    if(found == 0) {
        cout << "Element not found";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 0, b = 1;
    cout << a << " ";
    while (b <= n) {
        cout << b << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
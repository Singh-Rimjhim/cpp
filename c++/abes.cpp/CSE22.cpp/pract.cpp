#include <iostream>
#include <set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int arr[N][M];

    // Input arrays
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    set<int> common;

    // Store first array elements
    for (int j = 0; j < M; j++) {
        common.insert(arr[0][j]);
    }

    // Find common elements
    for (int i = 1; i < N; i++) {
        set<int> temp;

        for (int j = 0; j < M; j++) {
            if (common.count(arr[i][j])) {
                temp.insert(arr[i][j]);
            }
        }

        common = temp;
    }

    // Output
    for (int x : common) {
        cout << x << " ";
    }

    return 0;
}
#include <iostream>
#include <cstdlib>  // For malloc and free

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Allocate memory for arrays with explicit casting
    int **arr = (int **)malloc(n * sizeof(int *));
    int *sizes = (int *)malloc(n * sizeof(int)); // To store sizes of each array

    // Read arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        sizes[i] = k;
        arr[i] = (int *)malloc(k * sizeof(int));  // Explicit cast
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    // Process queries
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    free(sizes);

    return 0;
}
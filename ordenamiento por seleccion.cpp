#include <iostream>
#include <vector>

using namespace std;

void seleccion(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            swap(arr[i], arr[minIdx]);
        }

        cout << "Pasada " << i + 1 << ":" << endl << endl;
        for (int k = 0; k < n; k++) {
            cout << arr[k] << (k == n - 1 ? "" : " ");
        }
        cout << endl << endl;
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    seleccion(arr);
    return 0;
}
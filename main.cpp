#include <iostream>

using namespace std;

void burbuja(int numeros[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(numeros[j] > numeros[j+1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;
    
    cout << "arreglo original: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl << endl;

    burbuja(arr, n);

    cout << "arreglo ordenado: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
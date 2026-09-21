#include <iostream>

using namespace std;

void burbuja(int numeros[], int n) {
    int comparaciones = 0;
    int intercambios = 0;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            comparaciones++;
            if(numeros[j] > numeros[j+1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
                intercambios++;
            }
        }
        cout << "pasada " << i + 1 << ": ";
        for(int k = 0; k < n; k++) cout << numeros[k] << " ";
        cout << endl;
    }

    cout << "\nelementos: " << n << endl;
    cout << "comparaciones: " << comparaciones << endl;
    cout << "intercambios: " << intercambios << endl;
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;
    
    cout << "arreglo original: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl << endl;

    burbuja(arr, n);

    return 0;
}
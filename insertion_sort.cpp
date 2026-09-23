#include <iostream>
using namespace std;

void mostrarArreglo(int numeros[], int n) {
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

void insertionSort(int numeros[], int n) {
    for (int i = 1; i < n; i++) {
        int key = numeros[i];
        int j = i - 1;
        
        while (j >= 0 && numeros[j] > key) {
            numeros[j + 1] = numeros[j];
            j = j - 1;
        }
        numeros[j + 1] = key;
    }
}

int main() {
    int numeros[] = {7, 3, 8, 2, 6, 4, 5};
    int n = 7;

    cout << "Arreglo original:" << endl;
    mostrarArreglo(numeros, n);

    insertionSort(numeros, n);

    return 0;
}
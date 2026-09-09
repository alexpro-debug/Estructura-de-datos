#include <iostream>

using namespace std;

int main() {
    int tamano;

    // 1. Solicitar al usuario el tamaño del arreglo
    cout << "Ingrese el tamano del arreglo: ";
    cin >> tamano;

    // Validación básica para asegurar un tamaño válido
    if (tamano <= 0) {
        cout << "El tamano debe ser un numero mayor a 0." << endl;
        return 1; 
    }

    // Asignación de memoria dinámica (obligatorio al no usar vector/STL)
    int* arreglo = new int[tamano];

    // 2. Capturar los elementos desde el teclado
    cout << "\n--- Captura de datos ---" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << "Ingrese el valor para la posicion [" << i << "]: ";
        cin >> arreglo[i];
    }

    // 3. Mostrar todos los elementos del arreglo
    cout << "\n--- Elementos del arreglo ---" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // 4. Calcular suma, promedio, mayor y menor
    int suma = 0;
    int mayor = arreglo[0]; // Se inicializan con el primer elemento
    int menor = arreglo[0];

    for (int i = 0; i < tamano; i++) {
        suma += arreglo[i];
        
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
        if (arreglo[i] < menor) {
            menor = arreglo[i];
        }
    }
    
    // Convertimos 'suma' a double para obtener un promedio con decimales
    double promedio = static_cast<double>(suma) / tamano;

    cout << "\n--- Resultados ---" << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Valor mayor: " << mayor << endl;
    cout << "Valor menor: " << menor << endl;

    // 5 y 6. Buscar un número e indicar posición
    int numeroBuscar;
    bool encontrado = false;
    
    cout << "\n--- Busqueda ---" << endl;
    cout << "Ingrese un numero a buscar en el arreglo: ";
    cin >> numeroBuscar;

    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] == numeroBuscar) {
            cout << "Numero " << numeroBuscar << " encontrado en la posicion: " << i << endl;
            encontrado = true;
            break; // Termina la búsqueda al encontrar la primera coincidencia
        }
    }

    if (!encontrado) {
        cout << "El numero " << numeroBuscar << " no se encuentra en el arreglo." << endl;
    }

    // 7. Mostrar elementos en orden inverso
    cout << "\n--- Elementos en orden inverso ---" << endl;
    // Se inicializa en tamano-1 (último índice) y se decrementa hasta 0
    for (int i = tamano - 1; i >= 0; i--) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Liberar la memoria solicitada al sistema operativo (Crucial en C++)
    delete[] arreglo;

    return 0;
}
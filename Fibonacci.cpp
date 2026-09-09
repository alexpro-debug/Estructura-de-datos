#include <iostream>

using namespace std;

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int limite;
    
    cout << "ingresa hasta que numero de la serie de fibonacci quieres calcular: ";
    cin >> limite;
    
    if (limite < 0) {
        cout << "no se aceptan numeros negativos" << endl;
        return 1;
    }
    
    cout << endl;
    
    for (int i = 0; i <= limite; i++) {
        cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }
    
    cout << "(hasta aqui la ejecucion del programa se detiene)" << endl;
    
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void mostrarArreglo(const vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i] << (i == arr.size() - 1 ? "" : " ");
    }
    cout << endl;
}

void seleccionConContadores(vector<int> arr) {
    int n = arr.size();
    int comparaciones = 0;
    int intercambios = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            comparaciones++;
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        if (minIdx != i) {
            swap(arr[i], arr[minIdx]);
            intercambios++;
        }

        // Si el arreglo es pequeno, muestra el detalle de la pasada
        if (n <= 15) {
            cout << "Pasada " << i + 1 << ":" << endl;
            mostrarArreglo(arr);
            cout << endl;
        }
    }

    cout << "Comparaciones hechas: " << comparaciones << endl;
    cout << "Intercambios hechos: " << intercambios << endl;
    cout << "---------------------------------------" << endl;
}

int main() {
    // Listas de prueba indicadas en la practica
    vector<int> l1 = {8, 3, 7, 4, 2, 9, 1, 6, 5};
    vector<int> l2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> l3 = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> l4 = {1, 2, 3, 5, 4, 6, 7, 8, 9};

    vector<int> l5 = {
        847, 132, 596, 421, 73, 905, 268, 714, 359, 51,
        683, 194, 772, 315, 638, 27, 481, 856, 203, 749,
        564, 118, 932, 377, 690, 245, 813, 96, 527, 341,
        765, 182, 604, 459, 88, 721, 296, 547, 11, 879,
        403, 156, 634, 285, 998, 367, 529, 62, 746, 213,
        591, 824, 174, 438, 957, 326, 705, 39, 681, 251,
        519, 903, 147, 612, 334, 778, 225, 864, 93, 476,
        542, 719, 184, 653, 309, 987, 71, 395, 829, 263,
        608, 116, 451, 936, 278, 697, 33, 583, 762, 149,
        875, 224, 514, 68, 946, 382, 727, 197, 556, 811
    };

    vector<int> l6 = {
        394, 827, 156, 643, 72, 918, 235, 501, 769, 43,
        682, 314, 957, 128, 846, 291, 574, 9, 735, 462,
        803, 177, 629, 354, 996, 215, 488, 761, 92, 537,
        681, 346, 815, 264, 598, 731, 119, 425, 884, 57,
        623, 308, 947, 186, 516, 793, 68, 371, 659, 242,
        899, 137, 782, 453, 326, 704, 21, 561, 839, 275,
        614, 983, 105, 478, 352, 726, 191, 875, 41, 667,
        298, 549, 912, 164, 387, 755, 81, 528, 694, 333,
        973, 224, 607, 146, 438, 869, 52, 781, 317, 645,
        253, 590, 708, 98, 413, 954, 182, 521, 611, 886
    };

    vector<int> l7 = {
        621, 84, 937, 315, 476, 152, 803, 27, 694, 548,
        371, 916, 203, 765, 439, 58, 827, 286, 603, 119,
        972, 341, 714, 65, 529, 881, 247, 398, 756, 173,
        634, 22, 845, 462, 709, 134, 953, 317, 581, 96,
        428, 773, 251, 607, 862, 44, 695, 328, 517, 789,
        186, 934, 73, 556, 402, 918, 145, 671, 263, 849,
        36, 725, 491, 608, 157, 883, 294, 532, 761, 113,
        647, 354, 905, 218, 779, 61, 583, 427, 996, 324,
        716, 189, 875, 47, 638, 267, 540, 812, 98, 453,
        729, 174, 590, 335, 941, 126, 684, 256, 817, 369
    };

    cout << "=== PRUEBA 1 ===" << endl; seleccionConContadores(l1);
    cout << "=== PRUEBA 2 ===" << endl; seleccionConContadores(l2);
    cout << "=== PRUEBA 3 ===" << endl; seleccionConContadores(l3);
    cout << "=== PRUEBA 4 ===" << endl; seleccionConContadores(l4);
    cout << "=== PRUEBA 5 ===" << endl; seleccionConContadores(l5);
    cout << "=== PRUEBA 6 ===" << endl; seleccionConContadores(l6);
    cout << "=== PRUEBA 7 ===" << endl; seleccionConContadores(l7);

    return 0;
}
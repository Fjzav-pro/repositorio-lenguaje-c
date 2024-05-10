#include <iostream>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;

    // Solicitar al usuario las dimensiones de la primera matriz
    cout << "Ingrese el numero de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingrese el numero de columnas de la primera matriz: ";
    cin >> columnas1;

    // Solicitar al usuario las dimensiones de la segunda matriz
    cout << "Ingrese el numero de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingrese el numero de columnas de la segunda matriz: ";
    cin >> columnas2;

    // Verificar si las matrices son compatibles para la multiplicación
    if (columnas1 != filas2) {
        cout << "Error: Las dimensiones de las matrices no son compatibles para la multiplicacion." << endl;
        return 1;
    }

    // Declarar las matrices
    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    int producto[filas1][columnas2];

    // Ingresar elementos a la primera matriz
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    int i = 0;
    while (i < filas1) {
        int j = 0;
        while (j < columnas1) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    // Ingresar elementos a la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    i = 0;
    while (i < filas2) {
        int j = 0;
        while (j < columnas2) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
            j++;
        }
        i++;
    }

    // Realizar la multiplicación de matrices
    i = 0;
    while (i < filas1) {
        int j = 0;
        while (j < columnas2) {
            producto[i][j] = 0;
            int k = 0;
            while (k < columnas1) {
                producto[i][j] += matriz1[i][k] * matriz2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }

    // Mostrar la matriz resultante
    cout << "La matriz resultante de la multiplicacion es:" << endl;
    i = 0;
    while (i < filas1) {
        int j = 0;
        while (j < columnas2) {
            cout << producto[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

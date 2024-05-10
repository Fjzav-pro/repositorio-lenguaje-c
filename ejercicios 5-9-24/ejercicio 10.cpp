#include <iostream>
using namespace std;

int main() {
    int filas, columnas;

    // Solicitar al usuario las dimensiones de la matriz
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    // Declarar la matriz
    int matriz[filas][columnas];

    // Ingresar elementos a la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    int i = 0;
    while (i < filas) {
        int j = 0;
        while (j < columnas) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
            j++;
        }
        i++;
    }

    // Calcular la transposición de la matriz
    int transpuesta[columnas][filas];
    i = 0;
    while (i < filas) {
        int j = 0;
        while (j < columnas) {
            transpuesta[j][i] = matriz[i][j];
            j++;
        }
        i++;
    }

    // Mostrar la matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    i = 0;
    while (i < columnas) {
        int j = 0;
        while (j < filas) {
            cout << transpuesta[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

#include <iostream>
#include <vector>

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
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicacion." << endl;
        return 0;
    }

    // Declarar las matrices
    vector<vector<int>> matriz1(filas1, vector<int>(columnas1));
    vector<vector<int>> matriz2(filas2, vector<int>(columnas2));
    vector<vector<int>> resultado(filas1, vector<int>(columnas2));

    // Solicitar al usuario ingresar los elementos de la primera matriz
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // Solicitar al usuario ingresar los elementos de la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Realizar la multiplicación de matrices
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            int sum = 0;
            for (int k = 0; k < columnas1; k++) {
                sum += matriz1[i][k] * matriz2[k][j];
            }
            resultado[i][j] = sum;
        }
    }

    // Mostrar la matriz resultante
    cout << "La matriz resultante de la multiplicacion es:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

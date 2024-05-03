#include <iostream>
#include <vector>

using namespace std;

int main() {
    int filas, columnas;

    // Solicitar al usuario las dimensiones de la matriz
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    // Declarar la matriz
    vector<vector<int>> matriz(filas, vector<int>(columnas));

    // Solicitar al usuario ingresar los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular la transposición de la matriz
    vector<vector<int>> transpuesta(columnas, vector<int>(filas));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Mostrar la matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

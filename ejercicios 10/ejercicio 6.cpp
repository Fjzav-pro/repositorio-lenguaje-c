#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Ingrese la cantidad de calificaciones a promediar: ";
    cin >> num;

    // Declarar un arreglo de tamaño n para almacenar las calificaciones
    int calificaciones[num];

    // Solicitar al usuario que ingrese las calificaciones
    cout << "Ingrese las calificaciones:" << endl;
    for (int i = 0; i < num; i++) {
        cout << "Calificacion " << i+1 << ": ";
        cin >> calificaciones[i];
    }

    // Calcular el promedio
    int suma = 0;
    for (int i = 0; i < num; i++) {
        suma += calificaciones[i];
    }
    float promedio = suma / (float)num;

    // Mostrar el resultado
    cout << "El promedio de las calificaciones ingresadas es: " << promedio << endl;

    return 0;
}

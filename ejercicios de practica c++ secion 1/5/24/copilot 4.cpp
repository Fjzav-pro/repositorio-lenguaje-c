#include <iostream>

using namespace std;

int main() {
    float nota, suma = 0;

    // Leer las notas de los 10 estudiantes y calcular la suma
    cout << "Ingrese las notas de los 10 estudiantes:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "Nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    // Calcular el promedio
    float promedio = suma / 10;

    // Mostrar el promedio general
    cout << "El promedio general de la seccion es: " << promedio << endl;

    return 0;
}

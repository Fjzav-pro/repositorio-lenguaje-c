#include <iostream>
using namespace std;
int main() {
    int cantidadEstudiantes = 10;
    int contador = 1;
    float sumaNotas = 0;
    float nota, promedio;

    // Ingresar las notas de los estudiantes
    while (contador <= cantidadEstudiantes) {
        cout << "Ingrese la nota del estudiante " << contador << ": ";
        cin >> nota;
        sumaNotas += nota; // Suma de todas las notas
        contador++;
    }

    // Calcular el promedio de los estudiantes
    promedio = sumaNotas / cantidadEstudiantes;

    // Promedio general
    cout << "El promedio general de la seccion es: " << promedio << endl;

    return 0;
}

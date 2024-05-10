#include <iostream>

using namespace std;

int main() {
    int cantidadEstudiantes = 8;
    int contador = 1;
    int aprobados = 0, reprobados = 0;
    float sumaNotas = 0, promedio;
    float nota;

    // Ciclo para ingresar las notas de los estudiantes y contar aprobados y reprobados
    while (contador <= cantidadEstudiantes) {
        cout << "Ingrese la nota del estudiante " << contador << ": ";
        cin >> nota;
        sumaNotas += nota; // Suma de todas las notas

        if (nota >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
        contador++;
    }

    // Calculando el promedio
    promedio = sumaNotas / cantidadEstudiantes;

    // Mostrando la cantidad de alumnos aprobados y reprobados, y el promedio general
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}

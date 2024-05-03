#include <iostream>

using namespace std;

int main() {
    float nota, suma = 0, promedio;
    int aprobados = 0, reprobados = 0;

    cout << "Ingrese las notas de los 8 estudiantes:" << endl;
    for (int contador = 1; contador <= 8; contador++) {
        cout << "Nota del estudiante " << contador << ": ";
        cin >> nota;
        suma += nota;
        if (nota < 70) {
            reprobados++;
        }
    }
    
    aprobados = 8 - reprobados;
    promedio = suma / 8;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;
    cout << "Nota mínima para aprobar: 70" << endl;

    return 0;
}

#include<iostream>

using namespace std;

float calcularPagoCompania(int numAlumnos) {
    float pagoCompania;
    switch(numAlumnos) {
        case 100 ... 9999:
            pagoCompania = numAlumnos * 60.00;
            break;
        case 50 ... 99:
            pagoCompania = numAlumnos * 70.00;
            break;
        case 30 ... 49:
            pagoCompania = numAlumnos * 100.00;
            break;
        default:
            pagoCompania = 4500.00;
    }
    return pagoCompania;
}

float calcularPagoAlumno(int numAlumnos) {
    float pagoAlumno;
    switch(numAlumnos) {
        case 100 ... 9999:
            pagoAlumno = 60.00;
            break;
        case 50 ... 99:
            pagoAlumno = 70.00;
            break;
        case 30 ... 49:
            pagoAlumno = 100.00;
            break;
        default:
            pagoAlumno = 4500.00 / numAlumnos;
    }
    return pagoAlumno;
}

int main() {
    int numAlumnos;
    cout << "Ingrese el número de alumnos: ";
    cin >> numAlumnos;

    float pagoCompania = calcularPagoCompania(numAlumnos);
    float pagoAlumno = calcularPagoAlumno(numAlumnos);

    cout << "Pago a la compañía de autobuses: $" << pagoCompania << endl;
    cout << "Cada alumno debe pagar: $" << pagoAlumno << endl;

    return 0;
}
